/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 08:53:18 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/15 09:08:02 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
char *ft_strlowcase(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0' )
	{
	        if(str[i] >= 'A'  && str [i] <= 'Z') 			
            {      
								str[i] += 32;
								
            }
            i++;
    }    
	return (str);
}

int main ()
{
	char str[] = "HOLA";
	printf("%s",ft_strlowcase(str));
}
		
