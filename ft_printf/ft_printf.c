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

#include "ft_printf.h"

static int	ft_unsigned(unsigned int num)
{
	int	count;

	count = 0;
	if (num >= 10)
		count += ft_unsigned(num /10);
	count += ft_putchar_len((num % 10) + '0');
	return (count);
}

static int	ft_pointer(unsigned long long num)
{
	int count;
	
	count = 0;
	if (num == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	count += 2;
	count += ft_putnum_hex(num, "0123456789abcdef");
	return(count);
}

int	ft_int(int num)
{
	int count;

	count = 0;
	if (num == -2147483648)
	{
		ft_putstr_len("-2147483648");
		return (11);
	}
	if (num < 0)
	{
		write(1, "-", 1);
		count += 1;
		num = -num; 
	}
	if (num >= 10)
		count += ft_int(num /10);
	count += ft_putchar_len((num % 10) + '0');
	return (count);
}

static int	ft_managme(char def, va_list list)
{
	if (def == 'c')
		return (ft_putchar_len((char)va_arg(list, int)));
 	if (def == 's')
		return (ft_putstr_len(va_arg(list, char *)));
	if (def == 'p')
		return (ft_pointer(va_arg(list, unsigned long long)));
	if (def  == 'd' || def == 'i')
		return (ft_int(va_arg(list, int)));
	if (def == 'u')
		return (ft_unsigned(va_arg(list, unsigned int)));
	if (def == 'x')
		return (ft_putnum_hex(va_arg(list, unsigned int), "0123456789abcdef"));
	if (def == 'X')
		return (ft_putnum_hex(va_arg(list, unsigned int), "0123456789ABCDEF"));
	if (def == '%')
		return (ft_putchar_len('%'));
	return (0);
}

int	ft_printf(char const *str, ...)
{
	int	total_printf;
	int		i;
	va_list	list;

	va_start(list, str);
	i = 0;
	total_printf = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			total_printf += ft_managme(str[i], list);
		}
		else
		{
			write(1, &str[i], 1);
			total_printf++;
		}
		i++;
	}
	va_end (list);
	return (total_printf);
}

/*int	main(void)
{
	char	str[] = "Hola";
//	int	num = 10;
	int *ptr = NULL;

	ft_printf("%p\n", ptr);
	printf("la direccion %p\n", ptr);
//	ft_printf("Hola %c Mundo", 'f');
//	printf("\n%s", str);
	printf("\n");
	return (0);
}

#include "limits.h"
#include <stdio.h>

int	main(void)
{
	int	clone;
	int	origin;

	//CHAR
	clone = ft_printf("clone c: %c - fin\n", 'A');
        origin = printf("origi c: %c - fin\n", 'A');
	ft_printf("count clone %d\n", clone);
	printf("count origin %d\n", origin);

	//%
	clone = ft_printf("clone %%: %% - fin\n");
     	origin = printf("origi %%: %% - fin\n");

	ft_printf("count clone %d\n", clone);
           printf("count origin %d\n", origin);

	//String
	clone = ft_printf("clone s: %s %s - fin\n", "hola", "mundo");
	origin = printf("origi s: %s %s - fin\n", "hola", "mundo");

	ft_printf("count clone %d\n", clone);
        printf("count origin %d\n", origin);
	//Integer
	clone = ft_printf("clone i: %i - fin\n", INT_MIN);
        origin =   printf("origi i: %i - fin\n", INT_MIN);

	        ft_printf("count clone %d\n", clone);
           printf("count origin %d\n", origin);

	//hex
	clone = ft_printf("clone x: %x - fin\n", INT_MIN);
        origin = printf("origi x: %x - fin\n", INT_MIN);

	        ft_printf("count clone %d\n", clone);
           printf("count origin %d\n", origin);

	//HEX
	clone = ft_printf("clone x: %X - fin\n", INT_MAX);
        origin = printf("origi x: %X - fin\n", INT_MAX);

	        ft_printf("count clone %d\n", clone);
           printf("count origin %d\n", origin);

	//Pointer address
	clone = ft_printf("clone p: %p - fin\n", "address");
        origin = printf("origi p: %p - fin\n", "address");

	        ft_printf("count clone %d\n", clone);
           printf("count origin %d\n", origin);

	//Integer decimal?
	   unsigned int    num = 4294965;
	clone = ft_printf("clone d: %d - fin\n", num);
        origin = printf("origi d: %d - fin\n", num);

	        ft_printf("count clone %d\n", clone);
           printf("count origin %d\n", origin);

	//unsigned
	unsigned int	max = 0;
	clone = ft_printf("clone u: %u - fin\n", max);
        origin = printf("origi u: %u - fin\n", max);

	        ft_printf("count clone %d\n", clone);
           printf("count origin %d\n", origin);

	return (0);
}*/