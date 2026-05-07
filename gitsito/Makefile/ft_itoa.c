#include "libft.h"

static int contar_digitos(int n)
{
	int contador;

	contador = 0;
	if (n <= 0)
		contador = 1; //Para el espacio del 0 o el -
	while (n != 0)
	{
		n = n / 10;//Dividimos para quitar el digito y contar
		contador++;
	}
	return (contador);
	
}

char *ft_itoa(int n)
{
	int	len;
	char *ptr;
	int ultimo_digito;

	len = contar_digitos(n);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	ptr[len] = '\0';
	if (n == 0)
		ptr[0] = '0';
	if (n < 0)
		ptr[0] = '-';
	while(n != 0)//relleno de atras hacia adelante
	{
		ultimo_digito = n % 10;
		if (ultimo_digito < 0)
			ultimo_digito = -ultimo_digito;
		ptr[len - 1] = ultimo_digito + '0';
		n = n / 10;
		len--;
	}
	return (ptr);
}

/*
#include <stdio.h>

int	main(void)
{
	char *res;
	
	res = ft_itoa(-12540);
	printf("%s\n", res);
	free(res);
	return (0);
}
*/