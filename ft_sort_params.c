/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 02:33:29 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/20 16:53:51 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	ft_print(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return (*str);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*s1;
	char	*s2;
	int		temp;

	i = 1;
	s1 = argv[i];
	s2 = argv[i + 1];
	while (i < argc)
	{
		if (s1 > s2)
		{
			temp = *s1;
			*s1 = *s2;
			*s2 = temp;
		}
		ft_print(argv[temp]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
