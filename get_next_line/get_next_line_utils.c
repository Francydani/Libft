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

#include <stddef.h>

static size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

int	ft_putstr_len(char *s)
{
	int	len;

	if (!s)
	{
		write(1, "NULL", 4);
		return (4);
	}
	len = ft_strlen(s);
	write(1, s, len);
	return (len);
}

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

char	*ft_clean(char linea_sin_leer)
{
	char	*posicion;
	size_t	i;
	size_t	res;
	char	*nueva;

	i = 0;
	posicion = ft_strchr(linea_sin_leer, '\n');
	if (posicion[i + 1] == '\0')
	{
		free (linea_sin_leer);
	}
	else
	{
		res = ft_strlen(linea_sin_leer);
		nueva = malloc(res + 1);
		nueva = linea_sin_leer;
		free (linea_sin_leer);
	}
}
