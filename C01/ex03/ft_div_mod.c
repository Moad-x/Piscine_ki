#include <stdio.h>

void ft_div_mod(int a , int b , int *div , int *mod)
{
	*div = a / b ;
	*mod = a % b ;
}

int main()
{
	int c = 10 ;
	int d = 3 ;
	int e ;
	int f ;

	ft_div_mod(c, d, &e ,&f);
	printf("%d / %d = %d left %d\n",c,d,e,f);

	return 0;
}
