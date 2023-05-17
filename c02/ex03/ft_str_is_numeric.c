/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 06:27:55 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/15 08:01:59 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_str_is_numeric(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0' )
	{
	        if(!(str[i] >= 48  && str [i] <= 57)) 			
            {      
								return(0);
								
            }
            i++;
    }    
	return (1);
}

int main ()
{
	printf("%d",ft_str_is_numeric("hola"));
	printf("\n%d",ft_str_is_numeric("0123456789"));
	printf("\n%d",ft_str_is_numeric(""));	
}
