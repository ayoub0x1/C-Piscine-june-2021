/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymoulou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:20:31 by aymoulou          #+#    #+#             */
/*   Updated: 2021/06/24 09:25:00 by aymoulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	tab[3];

	tab[0] = '/';
	while (++tab[0] <= '7')
	{
		tab[1] = tab[0];
		while (++tab[1] <= '8')
		{
			tab[2] = tab[1];
			while (++tab[2] <= '9')
			{
				ft_putchar(tab[0]);
				ft_putchar(tab[1]);
				ft_putchar(tab[2]);
				if (tab[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
