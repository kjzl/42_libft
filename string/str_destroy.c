/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwurster <kwurster@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:02:06 by kwurster          #+#    #+#             */
/*   Updated: 2024/06/28 02:18:50 by kwurster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"
#include <stdlib.h>

/// @brief Destroy the string and free the memory.
/// @param str The string to destroy.
/// @note The string will be empty, but still usable after this operation.
void	str_destroy(t_str *str)
{
	if (str->heap)
	{
		free(str->_large_str);
		str->heap = FALSE;
	}
	str->len = 0;
	str->_small_str[0] = 0;
	str->mem_err = FALSE;
}
