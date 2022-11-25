#include <stdio.h>

int ft_strlen(char *str)
{
	unsigned int i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}

int main()
{
	char str[] = "Hello ,World!" ;
	int r = ft_strlen(str) ;

	printf("%d\n",r);

	return 0;
}
