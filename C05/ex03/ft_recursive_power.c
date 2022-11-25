#include <stdio.h>

int ft_iterative_power(int result,int nb,int power)
{
	while(power > 0)
	{
		result *= nb ;
		power--;
	}
	if(power-- > 0)
		return (ft_iterative_power(result,nb,power));
	return (result);
}
int ft_recursive_power(int nb,int power)
{
	if(power < 0)
		return 0;
	return (ft_iterative_power(1,nb,power));
}

int main()
{
	printf("%d\n",ft_recursive_power(10,2));

	return 0;
}
