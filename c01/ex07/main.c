/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:18:47 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/12 18:42:06 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)

{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
	swap = tab[i];
	tab[i] = tab [size -1 -i];
	tab[size -1 -i] = swap;
	i++;
	}
}

int	main(void)
{
	int tab [6]= {0,1,2,3,4,5};
	int size = 6;

	ft_rev_int_tab(tab,size);
	printf("%d,%d,%d,%d,%d,%d",tab[0],tab[1],tab[2],tab[3],tab[4],tab[5]);
	return(0);
}
