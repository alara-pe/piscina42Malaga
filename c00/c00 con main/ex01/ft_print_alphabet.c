∑/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:21:01 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/04 18:39:57 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	char f;
		
		f ='a';
		
while (f <= 'z')
		{
			write(1, &f, 1);
				f++;
		}

}
int main(void)
{
	ft_print_alphabet();
	return(0);
}
