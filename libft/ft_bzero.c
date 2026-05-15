/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:11:14 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:42:13 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)dest;
	while (len > 0)
	{
		*ptr = 0;
		ptr++;
		len--;
	}
}

/*
#include <stdio.h>
int main(void)
{
	char dest[] = "Hello World";
	ft_bzero(dest, 3);
	printf("%s\n", dest);
	return (0);
}
*/