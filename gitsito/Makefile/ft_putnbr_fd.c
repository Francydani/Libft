#include "libft.h"
/*
#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
*/
void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd((n %10) + '0', fd);
}
/*
int main(void)
{
	int num = 125;
	ft_putnbr_fd(num, 1);
	ft_putchar_fd('\n', 1);
	return(0);
}
	*/