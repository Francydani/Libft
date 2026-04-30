/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:33:24 by francysa          #+#    #+#             */
/*   Updated: 2026/04/30 14:20:45 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	tc;
	unsigned char	*ts;
	size_t			count;

	tc = (unsigned char)c;
	ts = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		if (ts[count] == tc)
			return (&ts[count]);
		count++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char string[] = "Hello World";
	char *pointer;
	
	pointer = ft_memchr(string, 'W', 12);
	printf("String: %s\n", string);
	printf("Result: %s\n", pointer);
	return (0);	
}
*/