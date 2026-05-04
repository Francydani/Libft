/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 09:38:56 by francysa          #+#    #+#             */
/*   Updated: 2026/05/04 13:08:45 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dest;
	while (len > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		len--;
	}
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
	char dest[] = "Hello World";
	ft_memset(dest, 'b', 5);
	printf("%s\n", dest);
	return (0);
}
*/