#include <stdio.h>

int ft_strcmp(char s1[] , char *s2)
{
	while(*s1 != '\0' && *s2 != '\0')
	{
		s1++ ;
		s2++ ;
	}
	return (*(unsigned char*)s1) - (*(unsigned char*)s2) ;
}

int main()
{
	char s1[] = "Hello" ;
	char s2[] = "Hello" ;

	printf("%d\n",ft_strcmp(s1 , s2));

	return 0;
}
