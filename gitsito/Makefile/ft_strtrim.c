/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:12:39 by francysa          #+#    #+#             */
/*   Updated: 2026/05/05 10:22:43 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	count1;
	char	*str;

	if (!s1 || !set)
		return (0);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (0);
	count1 = 0;
	while (start < end)
	{
		str[count1++] = s1[start++];
	}
	str[count1] = '\0';
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char *string = "aabccaHola abc Mundo aabcabcacd";
	char *set = "abcd";
	char *resultado = ft_strtrim(string, set);
	
	printf("Resultado: %s\n", resultado);
	return(0);
}
*/
