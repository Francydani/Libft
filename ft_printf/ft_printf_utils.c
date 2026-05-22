#include "ft_printf.h"

static size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

int	ft_putnum_hex(unsigned long long num, char *base)
{
	int	count;

	count = 0;
	if (num >= 16)
		count += ft_putnum_hex(num /16, base);
	write (1, &base[num % 16], 1);
	count++;
	return (count);
}

int	ft_putstr_len(char *s)
{
	int	len;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	len = ft_strlen(s);
	write(1, s, len);
	return (len);
}

int	ft_putchar_len(char c)
{
	write(1, &c, 1);
    return (1);
}
