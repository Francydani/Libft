/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 10:23:00 by francysa          #+#    #+#             */
/*   Updated: 2026/05/13 14:50:43 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			count;

	if (size && nmemb > 2147483647 / size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	count = 0;
	while (count < (nmemb * size))
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