/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_get.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwurster <kwurster@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:11:36 by kwurster          #+#    #+#             */
/*   Updated: 2024/04/02 05:55:43 by kwurster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

/// @brief Gives read access to the string data.
/// @param str String to read from.
/// @return Pointer to the string data.
unsigned char	*str_get(t_str *str)
{
	if (str->heap)
		return (str->_large_string);
	return (str->_small_string);
}
/// @brief Destroys the given string and returns its data.
/// @param str String to destroy.
/// @return Pointer to the string data or null.
unsigned char	*str_take(t_str* str)
{
	unsigned char	*out;

	if (str->heap)
	{
		out = str->_large_string;
	} else {
		out = ft_strndup(str->_small_string, str->len);
	}
	*str = str_empty();
	return (out);
}

/// @brief Clones the data of the given string.
/// @param str String to clone.
/// @return Pointer to the cloned string data or null.
unsigned char	*str_get_cloned(t_str str)
{
	return (ft_strndup(str_get(&str), str.len));
}
