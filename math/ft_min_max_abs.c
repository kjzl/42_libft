/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_max_abs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwurster <kwurster@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:57:38 by kwurster          #+#    #+#             */
/*   Updated: 2024/04/13 19:03:15 by kwurster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

long long	ft_max(long long a, long long b)
{
	if (a > b)
		return (a);
	return (b);
}

long long	ft_min(long long a, long long b)
{
	if (a < b)
		return (a);
	return (b);
}

unsigned long long	ft_umax(unsigned long long a, unsigned long long b)
{
	if (a > b)
		return (a);
	return (b);
}

unsigned long long	ft_umin(unsigned long long a, unsigned long long b)
{
	if (a < b)
		return (a);
	return (b);
}

/// @brief Safely calculate the absolute value of a number.
/// @param num Number to calculate the absolute value of.
/// @param min Minimum value of the number type, e.g. INT_MIN.
/// @return Absolute value of the number.
unsigned long long	ft_abs(long long num, long long min)
{
	if (num == min)
		return (((unsigned long long)-(min + 1)) + 1);
	if (num < 0)
		return (-num);
	return (num);
}
