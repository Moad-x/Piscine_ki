#include <stdio.h>

int ft_strncmp(char *s1 ,char *s2 , unsigned int n)
{
	while(*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		s1++ ;
		s2++ ;
		n-- ;
	}
	if(n = 0)
		return 0;
	return (*(unsigned char*)s1) - (*(unsigned char*)s2) ;
}

int main()
{
	char s1[] = "ABC" ;
	char s2[] = "AB" ;
	printf("%d\n",ft_strncmp(s1 , s2 , 3));

	return 0;
}
