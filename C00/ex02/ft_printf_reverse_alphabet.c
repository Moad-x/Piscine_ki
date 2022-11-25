#include<unistd.h>

void ft_putchar(char c)
{
	write(1 , &c , 1);
}
void ft_reverse_alphabet(void)
{
	char letter = 'z' ;
	
	while(letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}
int main()
{
	ft_reverse_alphabet();

	return 0;
}
