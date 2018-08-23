/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dschwarz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 00:49:35 by dschwarz          #+#    #+#             */
/*   Updated: 2018/08/20 16:52:14 by dschwarz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	ft_print(char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		ft_putchar(src[i]);
		i++;
	}
	return (*src);
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_print(argv[0]);
	ft_putchar('\n');
	return (0);
}
