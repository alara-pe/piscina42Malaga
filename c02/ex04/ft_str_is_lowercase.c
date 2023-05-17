/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:08:33 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/15 08:10:41 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_str_is_lowercase(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0' )
	{
	        if(!(str[i] >= 97  && str [i] <= 122)) 			
            {      
								return(0);
								
            }
            i++;
    }    
	return (1);
}

int main ()
{
	printf("%d",ft_str_is_lowercase("hola"));
	printf("\n%d",ft_str_is_lowercase("0123456789"));
	printf("\n%d",ft_str_is_lowercase(""));	
}
