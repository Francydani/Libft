/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 12:05:56 by francysa          #+#    #+#             */
/*   Updated: 2026/05/25 12:12:31 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s && s[count])
		count++;
	return (count);
}

char	*ft_strchr(const char *string, int c)
{
	int	count;

	count = 0;
	if (!string)
		return (0);
	while (string[count] != '\0')
	{
		if (string[count] == (char)c)
			return ((char *)&string[count]);
		count++;
	}
	if ((char)c == '\0')
		return ((char *)&string[count]);
	return (0);
}

char	*ft_strdup(const char *s)
{
	char	*newstr;
	int		count;

	count = 0;
	newstr = malloc(ft_strlen(s) + 1);
	if (newstr == 0)
		return (0);
	while (s[count] != '\0')
	{
		newstr[count] = s[count];
		count++;
	}
	newstr[count] = '\0';
	return (newstr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ptr;
	char	*s1_safe;

	s1_safe = (char *)s1;
	if (!s1)
		s1_safe = ft_strdup("");
	if (!s1_safe || !s2)
		return (NULL);
	ptr = malloc(ft_strlen(s1_safe) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	i = -1;
	while (s1_safe[++i] != '\0')
		ptr[i] = s1_safe[i];
	j = 0;
	while (s2[j] != '\0')
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	free(s1_safe);
	return (ptr);
}
