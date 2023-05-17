/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:06:43 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/17 09:54:59 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int i;
	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while(str[i] != '\0')
	{
		if ((str[i] >= 'A' && str [i] <= 'Z') || (str[i] >= 'a' && str [i]<= 'z'))
			i++;
		else
			return(0);
	}
	return (1);
}

int main ()
{
	printf("%d",ft_str_is_alpha("antonio"));
	printf("\n%d",ft_str_is_alpha("Antonio22"));
	printf("\n%d",ft_str_is_alpha("ANTONIO"));	
}
