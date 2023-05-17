/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 10:53:13 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/12 11:53:36 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
 void ft_div_mod(int a, int b, int *div, int *mod)
 {  
	 if (b != 0)
   {
     *div = a / b;
     *mod = a % b;
   }
 }

int main ()
{
	int a;
	int b;
	int c;
	int d;
	a = 20;
	b =	5;
	
	ft_div_mod(a,b ,&c, &d );
	printf("Divide %d / %d\n",a,b);
	printf("Resultado = %d\n",c);
	printf("Resto = %d\n",d);
	return 0;
}
