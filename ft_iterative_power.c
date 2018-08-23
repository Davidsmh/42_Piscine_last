/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 01:04:25 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/14 13:59:50 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	i = 1;
	result = nb;
	if (((power == 0) && (nb == 0)) || (nb == 1))
	{
		return (1);
	}
	if ((power < 0) || ((nb == 0) && (power > 0)))
	{
		return (0);
	}
	if ((power > 0) && (nb != 0))
	{
		while (i != power)
		{
			result = result * nb;
			i++;
		}
		return (result);
	}
	return (1);
}
