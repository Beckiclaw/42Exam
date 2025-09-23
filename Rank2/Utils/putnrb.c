#include <unistd.h>

void	putnbr(int n)
{
	long	nb;
	char	c;

	nb = n;
	if(nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if(nb >= 10)
		putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}
