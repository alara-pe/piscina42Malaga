#include <stdio.h>

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

int	main()
{
	char	src[10] = "Lara";
	char	dest[] = "Antonio ";
	printf("%s",ft_strncat(dest, src, 2));
}
