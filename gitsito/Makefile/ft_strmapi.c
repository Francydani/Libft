/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 09:35:26 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:44:09 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}
	*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			longitude;
	char			*temp;
	unsigned int	counter;

	if (!s || !f)
		return (NULL);
	longitude = ft_strlen(s);
	temp = malloc(sizeof(char) * (longitude + 1));
	if (!temp)
		return (NULL);
	counter = 0;
	while (s[counter] != '\0')
	{
		temp[counter] = f(counter, s[counter]);
		counter++;
	}
	temp[counter] = '\0';
	return (temp);
}
/*
char	add_one(unsigned int i, char c)
{
	(void)i;
	return (c + 1);
}

#include <stdio.h>

int	main(void)
{
	char *res = ft_strmapi("abc", add_one);

	if (res)
	{
		printf("Result: %s\n", res);
		free(res);
	}
	return (0);
}
*/
