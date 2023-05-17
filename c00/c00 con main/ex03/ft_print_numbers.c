/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:18:26 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/06 12:20:07 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_numbers(void)
{	
		char a;
			a = '0';
		while (a <= '9')
		{

			write(1, &a, 1);
			a++;
		
		}
}
		int main(void)
{
		ft_print_numbers();
		return(0);
}
		  

