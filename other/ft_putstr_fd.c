/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwurster <kwurster@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:34:56 by kwurster          #+#    #+#             */
/*   Updated: 2023/12/27 19:47:54 by kwurster         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (write(fd, s, len));
}
