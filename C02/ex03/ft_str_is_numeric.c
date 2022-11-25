#include <stdio.h>
#include <stdbool.h>

int ft_str_is_numeric(char *str)
{
	int i = 0 ;
	bool check = true ;

	while(true)
	{
		if(str[i] == '\0')
			break ;

		if(!(str[i] >= '0' && str[i] <= '9'))
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
	char *str , *dest;
	str = "12345" ;
	dest = "123Hello" ;

	printf("str = %d\t", ft_str_is_numeric(str));
	printf("dest = %d\n", ft_str_is_numeric(dest));

	return 0;
}
