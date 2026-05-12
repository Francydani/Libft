/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 10:23:00 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:42:17 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
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
	char *ptr = ft_calloc(3, 2);
	printf("%p", ptr);
	free(ptr);
}
*/