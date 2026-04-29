#include <unistd.h>
void    ft_print_v(short n)
{
    char    c;
    if(n <= 9)
    {
       c = n + 48;
       write(1, "0", 1);
       write(1, &c, 1);
    }
    else
    {
        c = (n / 10) + 48;
        write(1, &c, 1);
        c = (n % 10) + 48;
        write(1, &c, 1);
    }
}
void    ft_print_comb2(void)
{
    short   v[2];
    v[0] = 0;
    while(v[0] <= 98)
    {
        v[1] = v[0] + 1;
        while(v[1] <= 99)
        {
            ft_print_v(v[0]);
            write(1, " ", 1);
            ft_print_v(v[1]);
            if(!(v[0] == 98 && v[1] == 99))
            {
                write(1, ",", 1);
                write(1, " ", 1);
            }
            v[1]++;
        }
        v[0]++;
    }
}
