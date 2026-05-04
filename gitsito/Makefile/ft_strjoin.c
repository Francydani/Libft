/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:08:59 by francysa          #+#    #+#             */
/*   Updated: 2026/05/04 14:47:08 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	count_s1;
	size_t	count_s2;
	char	*ptr;

	if (!s1 || !s2)
		return (0);
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ptr == 0)
		return (0);
	count_s1 = 0;
	while (s1[count_s1] != '\0')
	{
		ptr[count_s1] = s1[count_s1];
		count_s1++;
	}
	count_s2 = 0;
	while (s2[count_s2] != '\0')
	{
		ptr[count_s1 + count_s2] = s2[count_s2];
		count_s2++;
	}
	ptr[count_s1 + count_s2] = '\0';
	return (ptr);
}

/*
#include <stdio.h>
int	main (void)
{
	char *s1 = "Hola";
	char *s2 = "mundo";
	char *str = ft_strjoin(s1, s2);

	printf("%s\n", str);
	free(str);
	return(0);
}
*/