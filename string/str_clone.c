/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_util_1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwurster <kwurster@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 21:33:56 by kwurster          #+#    #+#             */
/*   Updated: 2024/03/27 21:02:47 by kwurster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdlib.h>

t_str	str_clone(t_str str)
{
	return (str_new_clone_sized(str_get(&str), str.len));
}

t_str	str_clone_sized(t_str str, size_t len)
{
	return (str_new_clone_sized(str_get(&str), len));
}