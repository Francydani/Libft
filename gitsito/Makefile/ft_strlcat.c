/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:00:53 by francysa          #+#    #+#             */
/*   Updated: 2026/05/04 13:07:30 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count_dst;
	size_t	count_src;
	size_t	count;

	count_src = ft_strlen(src);
	count_dst = 0;
	while (count_dst < size && dst [count_dst] != '\0')
		count_dst++;
	if (count_dst == size)
		return (size + count_src);
	count = 0;
	while (src[count] != '\0' && (count_dst + count + 1) < size)
	{
		dst[count_dst + count] = src[count];
		count++;
	}
	dst[count_dst + count] = '\0';
	return (count_dst + count_src);
}

/*
#include <stdio.h>

int main(void)
{
	char	dst[20] = "Hello"; 
	char	src[] = " World!";
	size_t	res;

	printf("Antes: %s\n", dst);

	res = ft_strlcat(dst, src, 20);

	printf("Después: %s\n", dst);
	printf("Valor devuelto: %zu\n", res);
	return (0);
}
*/