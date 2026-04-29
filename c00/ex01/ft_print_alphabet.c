/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 19:36:06 by marvin            #+#    #+#             */
/*   Updated: 2026/04/29 19:36:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_print_alphabet(void)
{
    char alpha;

    alpha = 'a';
    while(alpha <= 'z')
    {
        ft_putchar(alpha);
        alpha++;
    }
}
int main(void)
{
    ft_print_alphabet();
    return (0);
}