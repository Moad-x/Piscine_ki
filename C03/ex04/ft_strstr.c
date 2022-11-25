#include <stdio.h>

char *ft_strstr(char *str,char *to_find)
{
	int i = 0 ,j = 0 ;
	if(to_find[j] == '\0')
		return (str);
	while(str[i] != '\0')
	{
		while(str[i+j] != '\0' && str[i+j] == to_find[j])
		{
			if(to_find[j+1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return 0;
}

int main()
{
	char s1[] = "Heallo World" ;
	char s2[] = "allo" ;
	char *p ;
	p = ft_strstr(s1,s2);
	printf("%s\n",p);

	return 0;
}
