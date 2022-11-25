#include <stdio.h>

char *ft_strcpy(char *dest , char *src)
{
	int i ;
	i = 0 ;
	while(src[i] != '\0')
	{
		dest[i] = src[i] ;
		i++ ;
	}
	dest[i] = '\0' ;
	return (dest) ;
}

int main()
{
	char src[] = "programming is fun" ;
	char dest[] = "Hello" ;
	ft_strcpy(dest , src) ;
	printf("%s", dest);
	printf("\n");

	return 0;
}
