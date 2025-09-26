#include <unistd.h>
#include <stdio.h>

/*int	main(int ac, char **av)
{
	(void)av;
	printf("%d\n", ac - 1);
	return(0);
}*/

void	putnbr(int n)
{
	int	nbr;
	char	c;

	nbr = n;
	if(nbr < 0)
	{
		write(1, "-", 1);
		nbr = - nbr;
	}
	if(nbr > 9)
		putnbr(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	(void)av;
	putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}

