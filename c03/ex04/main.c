#include<stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int o;
	int b;

	o = 0;
	b = 0;
	if(to_find[b] == '\0')
		return (str);
	while (str[o] != '\0')
	{
		while(str[o + b] == to_find[b] && str[o + b] !='\0')
			b++;
		if (to_find[b] == '\0')
				return (str + o);
		o++;
		b = 0;
	}
return (0);
}
int main()
{
	char str[] = "Hola Me llamo Antonio Lara Pelaez.";
	char to_find[] = "Lara";
	printf("%s", ft_strstr(str,to_find));
}
