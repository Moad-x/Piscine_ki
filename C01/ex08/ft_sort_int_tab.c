#include <stdio.h>

void ft_sort_int_tab(int *tab , int size)
{
	int i , a ;
	i = 0 ;
	while(i < size)
	{
		if(tab[i] > tab[i + 1])
		{
			a = tab[i] ;
			tab[i] = tab[i+1] ;
			tab[i+1] = a ;
			i = 0 ;
		}
		else
			i++;
	}
}

int main()
{
	int tab[] = {3,4,5,1,2,6,7,89};
	int size = 7 ;
	ft_sort_int_tab(tab , size);
	for(int i = 0 ; i <= size ; i++)
	{
		printf("%d",tab[i]);
	}
	printf("\n");
	return 0;
}
