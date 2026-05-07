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

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	longitud;
	char	*temp;
	unsigned int	counter;

	if (!s || !f)
		return (NULL);
	longitud = ft_strlen(s);
	temp = malloc(sizeof(char) * (longitud + 1));
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
char	sumar_uno(unsigned int i, char c)
{
	(void)i; // Esto es para que el compilador no se queje de que no usamos 'i'
	return (c + 1);
}

#include <stdio.h>

int	main(void)
{
	char *res = ft_strmapi("abc", sumar_uno);

	if (res)
	{
		printf("Resultado: %s\n", res); // Debería imprimir "bcd"
		free(res);
	}
	return (0);
}
*/