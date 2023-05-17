/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 18:09:35 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/22 19:58:48 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;
	int	x;

	x = 1;
	while (x < ac)
	{
		i = 0;
		while (av[x][i] != '\0')
		{
			ft_putchar(av[x][i]);
			i++;
		}
		ft_putchar('\n');
		x++;
	}
	return (0);
}
