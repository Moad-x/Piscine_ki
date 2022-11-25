#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int i = 1 ;
	int factorial = 1 ;
	if(nb < 0)
		return 0;
	while(i <= nb)
		factorial *= i++ ;
	return (factorial);
}

int main()
{
	printf("%d\n",ft_iterative_factorial(4));

	return 0;
}
