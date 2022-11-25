#include <stdbool.h>
#include <stdio.h>

bool check(char c , char *str)
{
	while(*str)
	{
		if(*str == c)
			return(true);
		str++;
	}
	return (false);
}
bool space(char str)
{
	return(check(str,"\t\n\r\f\v"));
}

bool plus_mines(char str)
{
	return (check(str,"+-"));
}

bool base_10(char str)
{
	return (str >= '0' && str <= '9');
}

int ft_atoi(char *str)
{
	int sign = 1 ;
	int result = 0 ;

	while(space(*str))
		str++;
	while(plus_mines(*str))
	{
		if(*str == '-')
			sign *= -1 ;
		str++ ;
	}
	while(base_10(*str))
	{
		result *= 10 ;
		result += *str - '0' ;
		str++ ;
	}
	return (result * sign) ;
}

int main()
{
	char *str ;
	str = "	---+--+1234ab567" ;
	printf("%d\n",ft_atoi(str));

	return 0;
}
