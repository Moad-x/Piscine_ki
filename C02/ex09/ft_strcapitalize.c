#include <stdio.h>

char *ft_strcapitalize(char *str)
{
	int i = 0 ;

	while(str[i] != '\0')
	{
		if((i == 0 || str[i-1] == ' ' ) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32 ;
		else if(!(i == 0 || str[i-1] == ' ') && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32 ;
		i++ ;
	}
	return (str) ;
}

int main()
{
	char str[] = "salut, comment tu va ? 42mots quarante-deux; cinquante+et_un" ;
	ft_strcapitalize(str) ;
	printf("%s\n", str);

	return 0;
}
