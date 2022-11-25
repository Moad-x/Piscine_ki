#include <stdio.h>

void ft_ultimate_div_mod(int *a , int *b)
{
	int div , mod ;
	div = *a / *b ;
	mod = *a % *b ;
	*a = div ;
	*b = mod ;
}

int main()
{
	int x = 10 ;
	int y = 3 ;

	ft_ultimate_div_mod(&x , &y);

	printf("div = %d , left = %d\n",x,y);

	return 0;
}
