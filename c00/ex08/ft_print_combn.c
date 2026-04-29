/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 22:24:31 by marvin            #+#    #+#             */
/*   Updated: 2026/04/27 22:24:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_array(char arr[], int n, int last)
{
    int     i;

    i = 0;
    if(arr[0] == last)
    {
        while(i < n)
        ft_putchar(arr[i++]);
        return;
    }
    while(i < n)
        ft_putchar(arr[i++]);
    write(1, ", ", 2);
}
void    ft_print_combn(int  n)
{
    char    v[10];
    char    v_max[10];
    int     flag;
    int     base;
    int     i;

    i = 0;

    while(i < n)
    {
        v[i] = i + 48;
        v_max[i] = (10 - n) + i + 48;
        i++;
    }
    ft_print_array(v, n, v_max[0]);

    while(v[0] != v_max[0])
    {
        flag = n-1;
        while(v[flag] == v_max[flag])
            --flag;
        
        base = ++(v[flag]);
        while(flag < n -1)
             v[++flag] = ++base;

        ft_print_array(v, n, v_max[0]);
    }
}
