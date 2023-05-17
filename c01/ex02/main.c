#include <stdio.h>

void ft_swap(int *a, int *b)
 {
    int tmp;
 
      tmp = *a;
      *a = *b;
      *b = tmp;
 }

int main()
{
	int a;
	int b;

	a = 6;
	b = 2;
	ft_swap(&a, &b);
	printf("%d \n", a);
	printf("%d", b);	
}
