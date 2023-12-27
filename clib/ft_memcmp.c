/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwurster <kwurster@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:32:56 by kwurster          #+#    #+#             */
/*   Updated: 2023/12/27 17:20:28 by kwurster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*buf1;
	const unsigned char	*buf2;
	size_t				i;

	buf1 = s1;
	buf2 = s2;
	i = 0;
	while (i < n && buf1[i] == buf2[i])
		i++;
	if (i == n)
		return (0);
	return (buf1[i] - buf2[i]);
}
