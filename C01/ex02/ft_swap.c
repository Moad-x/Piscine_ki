#include <stdio.h>

void ft_swap(int *a , int *b)
{
	int c ;

	c = *a ;
	*a = *b ;
	*b = c ;
}

int main()
{
	int x = 2 ;
	int y = 3 ;

	ft_swap(&x,&y);

	printf("x=%d\ty=%d\n",x,y);

	return 0;
}
