/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 09:41:06 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:43:54 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	count;

	if (!s || !f)
		return ;
	count = 0;
	while (s[count] != '\0')
	{
		f(count, &s[count]);
		count++;
	}
}
/*
void    add_x(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = 'X';
}

#include <stdio.h>

int main (void)
{
	char string[] = "123456";

	printf("before: %s\n", string);
	ft_striteri(string, add_x);
	printf("after: %s\n", string);
	return (0);
}
	*/
