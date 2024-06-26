/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base8.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwurster <kwurster@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:40:20 by kwurster          #+#    #+#             */
/*   Updated: 2024/04/30 13:15:12 by kwurster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str_slice.h"

t_str_slice	base8(void)
{
	return (cstr_slice(BASE8, 8));
}
