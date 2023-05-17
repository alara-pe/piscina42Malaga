/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:54:02 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/05 13:43:50 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void ft_is_negative (int n)
{
	char pos;
	char neg;

	pos = 'P';
	neg = 'N';
	if (n >= 0)
	{
					write(1, &pos, 1);
	}
	else
	{
					write(1, &neg, 1);
	}
}


int main(void)
{
	ft_is_negative(-2222);
	return(0);
}
