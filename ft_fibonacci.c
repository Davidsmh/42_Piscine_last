/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 17:05:16 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/13 18:02:01 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if ((index == 0) || (index == 1))
		return (index);
	if (index > 1)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	return (0);
}
