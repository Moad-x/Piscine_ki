#include <stdio.h>
#include <stdbool.h>

int ft_str_is_alpha(char *str)
{
	int i ;
	bool check ;

	check = true ;
	i = 0 ;

	while(true)
	{
		if(str[i] == '\0')
		{
			break ;
		}
		if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
		{
			check = false ;
			break ;
		}
		i++ ;
	}
	return (check) ;
}

int main()
{
	char *str ;
	str = "Hello" ;	

	printf("%d\n",ft_str_is_alpha(str));

	return 0;
}
