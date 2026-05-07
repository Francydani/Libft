#include "libft.h"

void   ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int    count;

    if (!s || !f)
        return ;
    count = 0;
    while (s[count] != '\0')
    {
        f(count, &s[count]);
        count++;
    }
}
/*
void    poner_equis(unsigned int i, char *c)
{
    if (i % 2 == 0)
        *c = 'X';
}

#include <stdio.h>

int main (void)
{
    char string[] = "123456";

    printf("antes: %s\n", string);
    ft_striteri(string, poner_equis);
    printf("despues: %s\n", string);
    return (0);
}
    */