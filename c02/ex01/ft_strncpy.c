/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:45:45 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/17 10:23:43 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char 	*ft_strncpy(char *dest, char *src, unsigned int n)

{
		unsigned int	i;
		i = 0;
		while (src[i] != '\0' && i < n)
		{
			dest[i] = src[i];
			i++;	
		}
		while (i < n)
		{
			dest[i]= '\0';
			i++;
		}
		return (dest);
}

int main (void)
{
	char src[]= "hola hola";
	char dest[]="adios adios";
	printf("%s", ft_strncpy(dest,src,5));

}
