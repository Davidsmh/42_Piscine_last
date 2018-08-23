/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 18:50:08 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/14 02:40:34 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int i;
	int factorial;

	i = 1;
	while ((nb >= 0) && (nb < 13))
	{
		if ((nb == 0) || (nb == 1))
			return (1);
		while (i != nb)
		{
			i++;
			factorial = i * ft_recursive_factorial(nb - 1);
		}
		return (factorial);
	}
	return (0);
}
