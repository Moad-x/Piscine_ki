#include <stdio.h>

int ft_recursive_factorial(int factorial ,int nb)
{
	factorial *= nb-- ;
	if(nb > 0)
		return(ft_recursive_factorial(factorial,nb));
	return (factorial);
}

int ft_iterative_factorial(int nb)
{
	return (ft_recursive_factorial(1,nb));
}

int main()
{	
	printf("%d\n",ft_iterative_factorial(4));
	return 0;
}
