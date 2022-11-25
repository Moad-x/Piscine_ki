#include <stdio.h>

void ft_rev_int_tab(int *tab , int size)
{
	int i ;
	int x ;
	i = 0 ;

	while(i < size)
	{
		x = tab[i] ;
		tab[i] = tab[size] ;
		tab[size] = x ;
		i++ ;
		size-- ;
	}
}
int main()
{
	int tab[] = {3,4,5,1,6,8,9};
	int size = 6 ;
	ft_rev_int_tab(tab , size);
	for(int i = 0 ; i <= size ; i++)
	{
		printf("%d",tab[i]);
	}
	printf("\n");
	return 0;
}
