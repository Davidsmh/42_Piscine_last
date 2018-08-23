/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 17:49:16 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/16 18:13:04 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i] >= 97 && str[i] <= 122)
	{
		if (str[i] == '\0')
			return (1);
		i++;
	}
	if (str[i] == 0)
		return (1);
	else
		return (0);
}
