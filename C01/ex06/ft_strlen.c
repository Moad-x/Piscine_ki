#include <stdio.h>

void ft_strlen(char *str)
{
	int i = 0 ;

	while(str[i] != '\0')
		i++;

	printf("%d",i);
}

int main()
{
	ft_strlen("Hello world");
	printf("\n");
	return 0 ;
}
