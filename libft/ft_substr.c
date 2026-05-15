/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:10:11 by francysa          #+#    #+#             */
/*   Updated: 2026/05/12 16:44:27 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	char	*ptr;
	size_t	longitud_s;

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

/*
#include <stdio.h>

int	main(void)
{
	char string[] = "hello world";
	char *rest;
	
	rest = ft_substr(string, 6, 4);
	
	printf("%s\n", rest);
	free(rest);
	return(0);
}


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void substring(char *destino, const char *fuente, int inicio, int longitud) {
	// Copiar 'longitud' caracteres desde 'fuente + inicio'
	strncpy(destino, fuente + inicio, longitud);
	// Asegurar que la cadena termine en nulo
	destino[longitud] = '\0';
}

int main() {
	char texto[] = "Hola Mundo";
	char sub[5]; // Espacio para "Hola" + '\0'
	
	substring(sub, texto, 2, 10);
	printf("Subcadena: %s\n", sub); // Resultado: Hola
	return 0;
}
*/
