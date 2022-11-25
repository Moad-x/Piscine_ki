#include <stdio.h>

char *ft_strcat(char *dest , char *src)
{
	char *p = dest ;
	while(*dest)
		dest++ ;
	while(*src != '\0')
	{
		*dest = *src ;
		dest++ ;
		src++ ;
	}
	return (p) ;
}

int main()
{
	char s1[20] = "Hello World this is";
	char s2[5] = "Moad" ;
	ft_strcat(s1 , s2);
	printf("%s\n",s1);
	return 0;
}
