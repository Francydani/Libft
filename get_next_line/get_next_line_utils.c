/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 12:05:56 by francysa          #+#    #+#             */
/*   Updated: 2026/05/25 12:12:31 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

static size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

int	ft_putstr_len(char *s)
{
	int	len;

	if (!s)
	{
		write(1, "NULL", 4);
		return (4);
	}
	len = ft_strlen(s);
	write(1, s, len);
	return (len);
}
