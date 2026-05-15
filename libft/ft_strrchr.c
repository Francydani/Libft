/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:54:56 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:44:21 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int		count;
	char	*tstring;
	char	tc;

	tstring = (char *)string;
	tc = (char)c;
	count = ft_strlen(string);
	while (count >= 0)
	{
		if (string[count] == tc)
			return (&tstring[count]);
		count--;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	string[20] = "Hello Worldooo";
	char	c = 'o';

	printf("%s\n", ft_strrchr(string, c));
	return (0);
}
*/