/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:31:00 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/08 15:56:26 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_print_comb(void)
{
	char a;
  char b;
	char c;
	
				a ='0';
				
					while (a <= '7')
					{
						b = a + 1;
							while (b <= '8')
							{
								c = b + 1;
								while (c <= '9')
								{
									  write(1, &a, 1);
										write(1, &b, 1);
										write(1, &c, 1);
										c++;
										if (a < '7')
										{
											write(1, ", ", 2);
				           }
										
								}
								b++;
							}
							a++;
					}

}
int main(void)
{
ft_print_comb();
	return(0);
}
