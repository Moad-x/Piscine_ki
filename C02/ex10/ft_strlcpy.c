#include <stdio.h>

unsigned int ft_strlcpy(char *dest , char *src , unsigned int size)
{
	unsigned int i , j ;
	i = 0 ;
	j = 0 ;
	while(dest[j] != '\0')
	{
		j++;
	}
	while(dest[i] != '\0')
	{
		if(i == size)
		{
			break ;
		}
		src[i] = dest[i] ;
		i++ ;
	}
	while(src[i] != '\0')
	{
		src[i] = '\0' ;
		i++ ;
	}
	return j;
}

int main()
{
	char str[] = "Hello world" ;
	char str2[] = "kim" ;
	ft_strlcpy(str , str2 , 5);
	printf("%s",str2);
}
