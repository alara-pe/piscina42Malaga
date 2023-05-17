/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 09:43:35 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/19 12:23:47 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
 {
    int div;
    int mod;
		
		if(*b != 0 ) 
		{
    	div = *a / *b;
    	mod = *a % *b;
    	*a = div;
    	*b =mod;
  	}
  
 }
int main()
{
    int a = 100;
    int b = 10;
    ft_ultimate_div_mod(&a, &b);
    printf("resultado = %d, resto = %d\n", a, b);
    return 0;

}
