/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:34:32 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/22 20:28:55 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;
	int	x;

	x = ac -1;
	while (x > 0)
	{
		i = 0;
		while (av[x][i] != '\0')
		{
			ft_putchar(av[x][i]);
			i++;
		}
		ft_putchar('\n');
		x--;
	}
 return (0);
}
