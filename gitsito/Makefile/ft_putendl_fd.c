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
void ft_putendl_fd(char *s, int fd)
{
    if (!s)
        return ;
    write(fd, s, ft_strlen(s));
    write(fd, "\n", 1);
}
/*
int main(void)
{
    char    *str = "Hello World";
    ft_putendl_fd(str, 1);
    return (0);
}
    */