

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_is_negative(int n)
{
        char i;
        i = 'N';
        char    m;
        m = 'P';
    if(n < 0)
    ft_putchar(i);
    else
    ft_putchar(m);
}
