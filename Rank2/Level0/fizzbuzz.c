#include <unistd.h>

void	ft_putnbr(int n)
{	
	long	nb;
	char	c;

	nb = n;
	if(nb < 0)
	{
		write(1, "-", 1);
		nb = - nb;
	}
	if(nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while(i <= 100)
	{
		if(i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if(i % 3 == 0)
			write(1, "fizz", 4);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
