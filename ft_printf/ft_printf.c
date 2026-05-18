/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francysa <francysa@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 11:26:38 by francysa          #+#    #+#             */
/*   Updated: 2026/05/18 16:18:36 by francysa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>

/* int	ft_un_caracter(char string)
{
	write(1, &string, 1);
} */

int	ft_gestionar(char def, va_list lista)
{
	if (def == 'c')
		ft_putchar_fd((char)(va_arg(lista, int)), 1);
 	if (def == 's')
		ft_putstr_fd((va_arg(lista, char *)), 1);
/*	if (string + 1 == 'p')
		ft_puntero();
	if (string + 1  == 'd')
		ft_decimal();
	if (string + 1  == 'i')
		ft_entero();
	if (string + 1 == 'u')
		ft_decimas_sinsigno();
	if (string + 1 == 'x')
		ft_hexadecimal();
	if (string + 1 == 'X')
		ft_hexadecimal_May();
	if (string + 1 == '%')
		ft_simbolo(); */
	return (0);
}

int	ft_printf(char const *str, ...)
{
	char	*string;
	int		i;
	va_list	lista;

	va_start(lista, str);
	i = 0;
	string = (char *)str;
	while (string[i] != '%')
		write(1, string++, 1);
	if (string[i] == '%')
		ft_gestionar(string[i+1], lista);
	va_end (lista);
	return (i);
}




int	main(void)
{
	char	str[] = "Hola";

	ft_printf("H%s", str);
//	printf("\n%s", str);
	return (0);
}
