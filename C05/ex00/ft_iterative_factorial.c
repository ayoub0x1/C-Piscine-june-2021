/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymoulou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 08:55:57 by aymoulou          #+#    #+#             */
/*   Updated: 2021/07/11 09:10:34 by aymoulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	i = 1;
	result = 1;
	if ((nb <= 0) || (nb > 12))
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		result = i * result;
		i++;
	}
	return (result);
}


int main()
{
	int i = 0;
	i = ft_iterative_factorial(7);
	printf("%d\n", i);
}