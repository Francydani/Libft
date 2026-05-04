/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:42:42 by francysa          #+#    #+#             */
/*   Updated: 2026/05/04 11:39:38 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count_little;
	size_t	count;
	size_t	counter;

	count_little = ft_strlen((char *)little);
	if (*little == '\0')
		return ((char *)big);
	count = 0;
	while ((count + count_little) <= len && big[count] != '\0')
	{
		counter = 0;
		while (little[counter] != '\0'
			&& big[count + counter] == little[counter])
			counter++;
		if (little[counter] == '\0')
			return ((char *)&big[count]);
		count++;
	}
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	const char *big = "hola mundo";
	const char *little = "mu";
	char *res = ft_strnstr(big, little, 12);

	printf("%s\n", res);
	return (0);
}
*/