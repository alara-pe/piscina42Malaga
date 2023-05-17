/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:10:44 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/15 10:05:45 by alara-pe         ###   ########.fr       */
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

char *ft_strcapitalize(char*str)
{	
	int	i;
	int i1;
	i= 0;
	i1 =1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{	
		if (str[i]>= 'a' && str[i] <= 'z')
			{
			if(i1 ==1)
					str[i] -=32;
				i1 = 0;
			}
			else if (str[i] >= '0'&& str[i] <= '9')
			i1 = 0;
			else
			i1 = 1;
			i++;
		}
	return(str);
}		
int main ()
{
	char str[] = "HOLA sal%ut, com&ment tu vas ? 42mots qua(rante-deux; cinquante+et+un";
	printf("%s",ft_strcapitalize(str));
}
