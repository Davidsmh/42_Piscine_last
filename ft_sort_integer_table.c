/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 23:33:34 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/09 15:00:50 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while (tab[i] != '\0')
	{
		i++;
	}
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[size];
			tab[size] = temp;
			i--;
		}
	}
}

int		main(void)
{
	int nb;

	nb = 0;
	int lol[] = {8, 5, 6, 5, 77887, 87, 587587, 585, 8758, 7585, 87587};
	ft_sort_integer_table(lol, 11);
	while (11 > nb)
	{
		printf("%d,", lol[nb]);
		nb++;
	}
	return (0);
}
