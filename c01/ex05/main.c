/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 14:09:31 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/12 10:29:09 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
	write (1, &c,1);	
}
void ft_putstr(char *str)
{
	int i;

	i =0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
int main ()
{
char *c = "hola me llamo Antonio";
 ft_putstr(c);
}
