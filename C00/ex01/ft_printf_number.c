#include<stdio.h>
#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c , 1);
}
void print_alphabet()
{
	char letter = 'a';
	while(letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}
int main()
{
	print_alphabet();
return 0;
}
