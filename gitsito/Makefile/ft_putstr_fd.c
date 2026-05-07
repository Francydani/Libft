#include "libft.h"
/*
#include <unistd.h>

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}
*/

void ft_putstr_fd(char *s, int fd)
{
    if (!s)
        return ;
    write(fd, s, ft_strlen(s));
}
/*
int main(void)
{
    char    *str = "Hello World\n";

    ft_putstr_fd(str, 1);
    return (0);
}
    */