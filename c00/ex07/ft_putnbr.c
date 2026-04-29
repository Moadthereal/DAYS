#include <unistd.h>

void    ft_putnbr(int nb)
{
    long    nbr;
    char    v[10];
    short   i;

   nbr = nb;
   i = 0;
   if(0 == nb)
   {
        write(1, "0", 1);
        return;
   }
   if(nbr < 0)
   {
        nbr *= -1;
        write(1, "-", 1);
   }

   while (nbr)
   {
        v[i++] = (nbr % 10) + 48;
        nbr /= 10;
   }
   while (i >= 0)
   {
        write(1, &v[--i], 1);
   }
}
