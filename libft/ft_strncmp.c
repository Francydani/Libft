/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:48:27 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:44:12 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (0);
	while (count < n - 1 && s1[count] && s1[count] == s2[count])
		count++;
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}

/*
#include <stdio.h>

int main(void)
{
	char	s1[20] = "Hello";
	char	s2[20] = "Hello W";
	int		rest;

	rest = ft_strncmp(s1, s2, 3);
	printf ("result = %d\n", rest);
	return (0);
}
*/