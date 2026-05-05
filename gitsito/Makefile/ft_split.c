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

/*
static int	ft_mallocs(char const *s, char *tokens)
{
	int	len;
	char **res;
	
	ft_contador_palabras(s, delimiter)
	res = malloc(sizeof(char) * (estado + 1))
	len = ft_strlen(s);

}
 

static size_t	ft_count_tokens(char const *s, char delimiter)
{
	char	*tokens;
	size_t	count_tokens;
	size_t	count;

	count = 0;
	count_tokens = 0;
	while(*s)
	{
		if (s[count] == delimiter)
			count++;
		else
			tokens[count_tokens++] = s[count++];
	}
	return(&tokens[count_tokens]);
}
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)

static char	*ft_relleno(char const *s, unsigned int estado, size_t contador)
{
	
	while()
	{
		
	}
}

char **ft_split(char const *s, char c)
{
	char	**res;
	int	n_palabras;
	
	n_palabras = ft_contador_palabras(s, c);
	res = malloc(sizeof(char *) * (n_palabras + 1));
    if (!res)
        return (NULL);
	***
	return (res);	
}

#include <stdio.h>

int main(void)
{
	char *string  = "_Hola__Mundo";
	char delimitador = '_';
	char	**rest = ft_split(string, delimitador);

	if (rest)
		printf("Resultado: %d\n",ft_contador_palabras(string, delimitador));
	return (0);
}
