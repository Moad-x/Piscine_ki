#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_comb2(void)
{
	int a = -1 ;
	int b ;
	while(a++ <= 98)
	{
		b = a ;
		while(b++ < 99)
		{
			ft_putchar((a / 10) + '0');
			ft_putchar((a % 10) + '0');
			ft_putchar(' ');
			ft_putchar((b / 10) + '0');
			ft_putchar((b % 10) + '0');
			ft_putchar(',');
		}
	}
}

int main()
{
	ft_print_comb2();

	return 0;
}
