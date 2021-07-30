/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymoulou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:32:58 by aymoulou          #+#    #+#             */
/*   Updated: 2021/07/03 10:10:06 by aymoulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	len;
	int	swap;

	i = 0;
	len = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[len];
		tab[len] = swap;
		i++;
		len--;
	}
}

int	main()
{
	int	i;
	int	tab[8] = {1, 2, 3, 4, 5, 6, 7, 8};

	//ft_rev_int_tab(tab, 8);
	while (i < 8)
	{
	printf("%d\n", tab[i]);
	i++;
	}
}
