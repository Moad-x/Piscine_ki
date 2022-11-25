#include <unistd.h>

void ft_putchar(char c)
{
	write(1 , &c , 1);
}

void ft_printf_numbers(void)
{
	char number = '0';
	while(number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}

int main()
{
	ft_printf_numbers();

	return 0;
}
