/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:23:47 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/04 20:24:28 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print_reverse_alphabet(void)
{
	char	f;
	
	f='z';
	while(f >= 'a')
	{
		write(1, &f,1);
			f--;
	}
}
int main(void)
{
		ft_print_reverse_alphabet();
		return(0);
}
