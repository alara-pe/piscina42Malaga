/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:16:35 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/16 11:05:58 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int ft_strlcpy(char *dest, char *src,unsigned int size)
{
	unsigned int o;
	unsigned int d;

	o = 0;
	d = 0;
	while (src[o])
	  o++;
	if(size < 1)
		return (o);
			while(src[d] && d < size -1)
			{
				dest[d] = src [d];
				d++;
			}
		dest[d] = '\0';
		return (o);

}
int  main(void)
{
	char src[] = "hola que dice";
	char dest[30] = "";
		printf("%d | %s",ft_strlcpy(dest, src, 30),dest);
}
