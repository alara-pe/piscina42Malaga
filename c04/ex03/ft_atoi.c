/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:58:56 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/21 23:35:15 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sig;
	int	resul;

	i = 0;
	sig = 1;
	resul = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
				i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
		sig *= -1;
		}
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		resul *= 10;
		resul += str[i] - '0';
		i++;
	}
	return (resul * sig);
}
/*
int main(void)
{
	char *str = " ---+--+1234ab567";
	printf("%d", ft_atoi(str));
}
*/
