/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:13:10 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/15 08:16:56 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_str_is_uppercase(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0' )
	{
	        if(!(str[i] >= 65  && str [i] <= 90)) 			
            {      
								return(0);
								
            }
            i++;
    }    
	return (1);
}

int main ()
{
	printf("%d",ft_str_is_uppercase("hola"));
	printf("\n%d",ft_str_is_uppercase("0123456789"));
	printf("\n%d",ft_str_is_uppercase("MKSDAASDFGA"));
	printf("\n%d",ft_str_is_uppercase(""));	
}
