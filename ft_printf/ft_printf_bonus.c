#include "ft_printf.h"

int ft_puthex_bonus(unsigned int num, char *base)
{
    int count;

    count = 0;
    if (num == 0)
    {
        write(1, "0", 1);
        return (1);
	}
    if (base[10] == 'A')
        write(1, "0X", 2);
    else
        write(1, "0x", 2);
    count += 2;
    count += ft_putnum_hex(num, base);
    return (count);
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

int	ft_sig_space(int num, char c)
{
	int	count;

	count = 0;
	if(num < 0)
		return(ft_int(num));
	write(1, &c, 1);
	count += 1;
	count += ft_int(num);;
	return (count);
}

static int	ft_managme(const char *str, int *i, va_list list)
{
	int	sig;
	int space;
	int	hash;

	sig = 0;
	space = 0;
	hash = 0;
	while (str[*i] == '+' || str[*i] == ' ' || str[*i] == '#')
	{
		if (str[*i] == '+')
			sig = 1;
		else if (str[*i] == ' ')
			space = 1;
		else if (str[*i] == '#')
			hash = 1;
		*i = *i + 1;
	}
	if (str[*i] == 'd' || str[*i] == 'i')
		return ((list, sig, space));
	if (str[*i] == 'x' || str[*i] == 'X')
		return (ft_managme_hex(list, hash, str[*i]));
	return (0);
}

int	ft_printf_bonus(char const *str, ...)
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
			total_printf += ft_managme(str, &i, list);
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


/*#include <stdio.h>

int	main(void)
{
//  printf("% d", 42);
//  printf("% +d\n", -42);
	printf("%#x\n", 42);

	ft_printf_bonus("%#x", 42);
  
//  ft_printf_bonus("% d", 42);
//  ft_printf_bonus("% +d", -42);
//	printf("\n%s", str);
	printf("\n");
	return (0);
}*/