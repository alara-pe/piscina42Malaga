/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numerosreves.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:42:13 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/10 09:51:38 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main (void)
{
	char a;
			a =	'9';

			while(a >= '0')
			{	write(1,&a,1);
					a--;
			}
			return(0);
}
