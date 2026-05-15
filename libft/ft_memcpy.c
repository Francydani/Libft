/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:51:34 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:43:10 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*tdest;
	unsigned const char	*tsrc;
	size_t				count;

	tdest = (unsigned char *)dest;
	tsrc = (unsigned const char *)src;
	count = 0;
	if (tdest == tsrc || n == 0)
		return (dest);
	while (count < n)
	{
		tdest[count] = tsrc[count];
		count++;
	}
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
	char src[] = "Weeknds";
	char dest[10] = "";

	ft_memcpy(dest, src, 8);
	printf("%s\n", dest);
	return (0);
}
*/