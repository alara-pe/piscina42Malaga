/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:20:16 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/15 08:32:54 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_str_is_printable(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0' )
	{
	        if(!(str[i] >= 32  && str [i] <= 126)) 			
            {      
								return(0);
								
            }
            i++;
    }    
	return (1);
}

int main ()
{
	printf("%d",ft_str_is_printable("hola"));
	printf("\n%d",ft_str_is_printable("0123456789"));
	printf("\n%d",ft_str_is_printable("HOLA"));
	printf("\n%d",ft_str_is_printable("¿Ññ"));
	printf("\n%d",ft_str_is_printable(""));

}
