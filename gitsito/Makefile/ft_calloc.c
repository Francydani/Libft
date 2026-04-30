/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 10:23:00 by francysa          #+#    #+#             */
/*   Updated: 2026/04/30 14:20:11 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	count;

	ptr = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
		return (0);
	count = 0;
	while (count < nmemb)
	{
		ptr[count] = 0;
		count++;
	}
	return ((void *)ptr);
}

/*
#include <stdio.h>

int main(void)
{
	char *ptr = ft_calloc(5, 4);
	printf("%p", ptr);
	free(ptr);
}
*/