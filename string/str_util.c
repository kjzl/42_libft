/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwurster <kwurster@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:14:03 by kwurster          #+#    #+#             */
/*   Updated: 2024/06/14 11:51:15 by kwurster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "str.h"

t_bool	str_mem_err(const void *str)
{
	return (((t_str *)str)->mem_err);
}