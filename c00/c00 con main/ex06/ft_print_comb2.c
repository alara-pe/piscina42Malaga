/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 16:32:11 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/06 18:28:07 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_comb2(void)
{
	int a;
	int b;
	a = 0;
		while (a <= 98)
		{
			b = a + 1;
			while (b <= 99)
			{
				ft_putchar((a / 10) + '0');
				ft_putchar((a % 10) + '0');
				write(1, " ", 1);
				ft_putchar((b / 10) + '0');
				ft_putchar((b % 10)	+ '0');
				if (a != 98 || b != 99)
				{
					write(1, ", ", 2);
				}
					b++;
			}
		a++;	
		}
}

int main(void)
{
	ft_print_comb2();
	return(0);
}
