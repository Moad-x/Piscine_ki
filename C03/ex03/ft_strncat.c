#include <stdio.h>

char *ft_strncat(char *dest , char *src , unsigned int n)
{
	char *p = dest ;
	while(*dest)
		dest++ ;
	while(*src != '\0' && n > 0)
	{
		*dest = *src ;
		dest++ ;
		src++ ;
		n--;
	}
	return (p) ;
}

int main()
{
	char s1[20] = "Hello World this is";
	char s2[5] = "Moad" ;
	ft_strncat(s1 , s2 , 3);
	printf("%s\n",s1);
	return 0;
}
