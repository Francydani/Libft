/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 10:29:13 by francysa          #+#    #+#             */
/*   Updated: 2026/05/05 15:58:31 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t    count;
    char    *ptr;
    size_t    longitud_s;

    if (!s)
        return (0);
    longitud_s = ft_strlen(s);
    if (start >= longitud_s)
        len = 0;
    else if (len > longitud_s - start)
        len = longitud_s - start;
    ptr = malloc(sizeof(char) * (len + 1));
    if (ptr == NULL)
        return (0);
    count = 0;
    while (count < len && s[start + count] != '\0')
    {
        ptr[count] = s[start + count];
        count++;
    }
    ptr[count] = '\0';
    return (ptr);
}

static int	ft_contador_palabras(char const *s, char delimiter)
{
	int	i;
	int contador;
	int estado;
	
	i = 0;
	contador = 0;
	estado = 0;

	while (s[i])
	{
		if (s[i] == delimiter)
			estado = 0;
		else if (estado == 0)
		{
			estado = 1;
			contador++;
		}
	i++;
	}
	return (contador);
}

static void ft_liberar_todo(char **res, size_t guardadas)
{
    while (guardadas > 0)
    {
        guardadas--;
        free(res[guardadas]);
    }
    free(res);
}

static char	**ft_relleno(char **res, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while(s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i; // el inicio de la palabra es igual i
			while (s[i] && s[i] != c)
				i++;
			res[j] = ft_substr(s, start, i - start);
			if (!res[j])
				return (ft_liberar_todo(res, j), NULL);
			j++;
		}
	}
	res [j] = NULL;
	return (res);
}

char **ft_split(char const *s, char c)
{
	char	**res;
	int	n_palabras;
	
	if (!s)
		return (NULL);
	n_palabras = ft_contador_palabras(s, c);
	res = malloc(sizeof(char *) * (n_palabras + 1));
	if (!res)
		return (NULL);
	return (ft_relleno(res, s, c));	
}

#include <stdio.h>

int main(void)
{
    char    **r = ft_split("_Hola__Mundo", '_');
    int        i = 0;

    if (!r)
        return (1);
    while (r[i])
    {
        printf("%s\n", r[i]);
        free(r[i++]);
    }
    free(r);
    return (0);
}
