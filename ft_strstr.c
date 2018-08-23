/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 22:42:07 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/16 13:08:31 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *a;
	char *b;

	if (*to_find == 0)
	{
		return (str);
	}
	while (*str != '\0')
	{
		a = str;
		b = to_find;
		while (*a == *b && a != 0 && b != 0)
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (str);
		str++;
	}
	return (0);
}
