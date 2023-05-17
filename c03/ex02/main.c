

#include<stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
   b= 0;	
	while (dest[b] != '\0')
	{
		b++;
	}
	
	while (src[a] != '\0')
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	dest[b] = '\0';
	return (dest);
}

int main ()
{
	char src[30] ="Lara";
	char dest[30] = "Antonio ";
	
	printf("%s",ft_strcat (src , dest));
}

