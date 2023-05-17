/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 11:32:24 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/19 14:15:29 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	o;
	unsigned int	d;

	o = 0;
	d = 0;
	while (dest[d] != '\0')
	{
	d++;
	}
	while (o < nb && src[o] != '\0')
	{
		dest[o + d] = src[o];
		o++;
	}
	dest[o + d] = '\0';
	return (dest);
}

