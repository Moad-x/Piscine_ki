#include <stdio.h>

char *ft_strupcase(char *str)
{
	int i = 0 ;

	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32 ;
		}
		i++ ;
	}
	return (str) ;
}

int main()
{
	char str[] = "HELLO WORLD" ;
	ft_strupcase(str) ;
	printf("%s\n", str);

	return 0;
}
