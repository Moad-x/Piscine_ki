#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_print_combn(int n)
{
	char x ;
	int y ;
	n = 2 ;
	x = n - 2 ;
	while(x <= '8')
	{
		y = x + 1;
		while(y <= 9)
		{
			ft_putchar(x + '0');
			ft_putchar((y % 10) + '0');
			ft_putchar(' ');
			ft_putchar(',');
			y++;
		}
		x++;
	}
}

int main()
{
	ft_print_combn('n');

	return 0;
}
