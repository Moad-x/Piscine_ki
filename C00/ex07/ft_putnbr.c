#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putnbr(int nb)
{
	if(nb >= 0 && nb < 10)
		ft_putchar(nb + '0');
	else if(nb > 9)
	{
		ft_putchar((nb / 10) + '0');
		ft_putchar((nb % 10) + '0');
	}
	else if (nb < 0)
	{
		ft_putchar('-');	
		ft_putnbr(-nb);
	}
}

int main()
{
	int n = -42 ;
	ft_putnbr(n);

	return 0;
}
