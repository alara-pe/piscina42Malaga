/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:05:27 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/13 16:27:45 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	 dest[i] = '\0';
		 return(dest);
}

int main(void)
{
			char src[] = "adios";
			
			char dest[] = "hola1";
			
			printf("%s",ft_strcpy(dest,src));
			
}
