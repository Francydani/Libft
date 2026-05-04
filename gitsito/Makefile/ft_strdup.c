/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 12:12:16 by francysa          #+#    #+#             */
/*   Updated: 2026/05/04 14:46:50 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*newstr;
	int		count;
	int		count_s;
	int		count_newstr;

	count_s = ft_strlen((char *)s);
	newstr = malloc(count_s + 1);
	if (newstr == 0)
		return (0);
	count = 0;
	count_newstr = 0;
	while (s[count] != '\0')
	{
		newstr[count_newstr] = s[count];
		count++;
		count_newstr++;
	}
	newstr[count] = '\0';
	return (newstr);
}
/*
#include <stdio.h>

int main(void)
{
	char *str = "This is a copy";
	char *newstr = ft_strdup(str);

	printf("%s\n", newstr);
	return (0);
}
*/