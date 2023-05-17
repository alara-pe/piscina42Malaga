/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:35:10 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/15 08:51:41 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
char *ft_strupcase(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0' )
	{
	        if(str[i] >= 'a'  && str [i] <= 'z') 			
            {      
								str[i] -= 32;
								
            }
            i++;
    }    
	return (str);
}

int main ()
{
	char str[] = "hola";
	printf("%s",ft_strupcase(str));
		
}
