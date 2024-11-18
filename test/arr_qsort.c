/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_qsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwurster <kwurster@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:29:49 by kwurster          #+#    #+#             */
/*   Updated: 2024/11/11 15:18:41 by kwurster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

static int32_t	cmp_u8(const void *a, const void *b)
{
	uint8_t	*u8a;
	uint8_t	*u8b;

	u8a = (uint8_t *)a;
	u8b = (uint8_t *)b;
	if (*u8a < *u8b)
		return (-1);
	if (*u8a > *u8b)
		return (1);
	return (0);
}

// static void	print_u8_array(uint8_t *arr, size_t len)
// {
// 	size_t	i;

// 	i = 0;
// 	while (i < len)
// 	{
// 		ft_printf("%u ", arr[i]);
// 		i++;
// 		if (i % 5 == 0)
// 			ft_printf("\n");
// 	}
// 	ft_printf("\n");
// }

static bool	_test_arr_qsort(bool test_empty)
{
	uint8_t		*arr;
	uint32_t	len;
	bool		sorted;

	len = rndm() & 0xFFF;
	arr = malloc((size_t)len);
	ft_printf("qsort arr len: %u\n", (uint32_t)len);
	if (arr == 0)
		return (false);
	rndm_bytes(arr, len);
	if (test_empty)
		len = 0;
	arr_qsort(arr, len, 1, cmp_u8);
	sorted = arr_is_sorted(arr, len, 1, cmp_u8);
	free(arr);
	return (sorted);
}

bool	test_arr_qsort(void)
{
	size_t	i;

	i = 0;
	while (i < ARR_QSORT_U8_TCOUNT)
	{
		if (!_test_arr_qsort(false))
			return (false);
		i++;
	}
	if (!_test_arr_qsort(true))
		return (false);
	return (true);
}