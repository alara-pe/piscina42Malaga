/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alara-pe <alara-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 13:29:26 by alara-pe          #+#    #+#             */
/*   Updated: 2023/02/19 15:19:50 by alara-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	o;
	int	b;

	o = 0;
	b = 0;
	if (to_find[b] == '\0')
		return (str);
	while (str[o] != '\0')
	{
		while (str[o + b] == to_find[b] && str[o + b] != '\0')
			b++;
		if (to_find[b] == '\0')
			return (str + o);
		o++;
		b = 0;
	}
	return (0);
}
