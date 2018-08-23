/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 01:34:04 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/20 16:52:51 by dschwarz         ###   ########.fr       */
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
	int i;

	i = 1;
	while (i < argc)
	{
		ft_print(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
