#include <stdio.h>

int count_string(char *str)
{
	unsigned int count = 0;
	while(str[count] != '\0')
		count++;

	return (count) ;
}

unsigned int ft_strlcat(char *dest,char *src,unsigned char size)
{
	unsigned int lenght_dest = count_string(dest) ;
	unsigned int lenght_src = count_string(src) ;
	unsigned int i = 0 ;
	if(lenght_dest > size)
		return (lenght_src + size) ;
	if(size == 0)
		return (lenght_src) ;
	i = 0;
	while(src[i] != '\0' && i < (size-1-lenght_dest))
	{
		src[i+lenght_dest] = src[i] ;
		i++;
	}
	return (lenght_dest+lenght_src);
}

int main()
{
	char *s1 ;
	char *s2 ;
	char dest[100] ;
	unsigned int i = 0;
	s1 = "Hello" ;
	s2 = "World" ;

	while(i < 6)
	{
		dest[i] = s1[i] ;
		i++;
	}
	printf(" (%d) $%s$ \n",ft_strlcat(dest,s2,4),dest);

	return 0;
}
