/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:51:13 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/12 12:43:39 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)

{
	int	n;
	int	*nbr8;
	int	**nbr7;
	int	***nbr6;
	int	****nbr5;
	int	*****nbr4;
	int	******nbr3;
	int	*******nbr2;
	int	********nbr1;
	int	*********nbr;

		n = 21;
		nbr8 = &n;
		nbr7 = &nbr8;
		nbr6 = &nbr7;
		nbr5 = &nbr6;
		nbr4 = &nbr5;
		nbr3 = &nbr4;
		nbr2 = &nbr3;
		nbr1 = &nbr2;
		nbr = &nbr1;
	ft_ultimate_ft(nbr);
	printf("%d", n);
	return (0);
}
