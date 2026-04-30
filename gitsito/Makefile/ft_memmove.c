/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 09:48:57 by francysa          #+#    #+#             */
/*   Updated: 2026/04/30 14:20:59 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tdest;
	unsigned const char	*tsrc;
	size_t				cont;

	tdest = (unsigned char *)dest;
	tsrc = (unsigned const char *)src;
	cont = n;
	if (tdest == tsrc || n == 0)
		return (dest);
	while (cont > 0)
	{
		cont--;
		tdest[cont] = tsrc[cont];
	}
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
	char src[10] = "Weekens";
	ft_memmove(src + 5, src, 5);
	printf("%s\n", src);
	return (0);
}
*/