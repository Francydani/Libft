/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:53:06 by francysa          #+#    #+#             */
/*   Updated: 2026/04/30 14:21:09 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	int		count;
	char	*tstring;
	char	tc;

	tstring = (char *)string;
	tc = (char)c;
	count = 0;
	while (string[count] != '\0')
	{
		if (string[count] == tc)
			return (&tstring[count]);
		count++;
	}
	if (tc == '\0')
		return (&tstring[count]);
	return (0);
}

/*
#include <stdio.h>
int main(void)
{
	char string[20] = "Hello World";
	char c = 'W';
	
	printf("%s\n", ft_strchr(string, c));
}
*/