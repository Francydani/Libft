/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 09:48:57 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:43:16 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_aux(unsigned char *dest, unsigned const char *src, size_t n)
{
	size_t	cont;
	size_t	count;

	if (dest < src)
	{
		count = 0;
		while (count < n)
		{
			dest[count] = src[count];
			count++;
		}
	}
	else
	{
		cont = n;
		while (cont > 0)
		{
			cont--;
			dest[cont] = src[cont];
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tdest;
	unsigned const char	*tsrc;

	tdest = (unsigned char *)dest;
	tsrc = (unsigned const char *)src;
	if (tdest == tsrc || n == 0)
		return (dest);
	ft_aux(tdest, tsrc, n);
	return (dest);
}
/*

#include <stdio.h>

int main(void)
{
	char src[30] = "a shiny white sphere";
	ft_memmove(src + 8, src + 2, 5);
	printf("%s\n", src);
	return (0);
}
*/