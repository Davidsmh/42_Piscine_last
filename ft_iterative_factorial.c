/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 00:27:07 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/12 18:42:12 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	if ((nb >= 0) && (nb < 13))
	{
		if (nb == 0)
		{
			return (1);
		}
		while (nb > 1)
		{
			i = i * nb;
			nb--;
		}
		return (i);
	}
	else
		return (0);
}
