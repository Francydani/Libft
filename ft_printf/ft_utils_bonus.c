#include "ft_printf.h"

void	ft_flags(const char *str, int *i, int *sig, int *space, int *hash)
{
	while(str[*i] == '+' || str[*i] == ' ' || str[*i] == '#')
	{
		if (str[*i] == '+')
			*sig = 1;
		else if (str[*i] == ' ')
			*space = 1;
		else if (str[*i] == '#')
			*hash = 1;
		*i = *i + 1;
	}
}

int	ft_managme_int(va_list list, int sig, int space)
{
	int	num;

	num = va_arg(list, int);
	if (sig == 1)
		return (ft_sig_space(num, '+'));
	if (space == 1)
		return (ft_sig_space(num, ' '));
	return (ft_int(num));
}

int	ft_managme_hex(va_list list, int hash, char format)
{
	unsigned int	num;

	num = va_arg(list, unsigned int);
	if (format == 'x')
	{
		if (hash == 1)
			return (ft_puthex_bonus(num, "0123456789abcdef"));
		return (ft_putnum_hex(num, "0123456789abcdef"));
	}
	if (format == 'X')
	{
		if (hash == 1)
			return (ft_puthex_bonus(num, "0123456789ABCDEF"));
		return (ft_putnum_hex(num, "0123456789ABCDEF"));
	}
	return (0);
}