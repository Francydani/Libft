/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 13:14:04 by francysa          #+#    #+#             */
/*   Updated: 2026/05/04 13:57:46 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	src_count;

	src_count = 0;
	while (src[src_count] != '\0')
		src_count++;
	if (size == 0)
		return (src_count);
	count = 0;
	while (src[count] != '\0' && count < (size -1))
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0';
	return (src_count);
}

/*
#include <stdio.h>

int main (void)
{
	char src[] = "Hello World";
	char dst[12];
	size_t buffer;

	buffer = ft_strlcpy(dst, src, 12);
	printf("Copia: %s\n", dst);
	printf("Longitud original (src): %lu\n", buffer);
	return (0);
}
*/