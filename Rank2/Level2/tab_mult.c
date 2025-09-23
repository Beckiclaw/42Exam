#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*static void	putchar(char c)
{
	write(1, &c, 1);
}

static void	putstr(const char *s)
{
	int i;

	i = 0;
	while(s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

static void	putnbr(int n)
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

static int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

int	main(int ac, char **av)
{
	int	n;
	int	i;

	if(ac == 2)
	{
		n = ft_atoi(av[1]);
		i = 1;
		while(i <= 9)
		{
			putnbr(i);
			putstr(" x ");
			putnbr(n);
			putstr(" = ");
			putnbr(i * n);
			putchar('\n');
			i++;
		}
	}
	else
		putchar('\n');
	return(0);
}
*/
int	main(int ac, char **av)
{
	if(ac == 2)
	{
		int	n = atoi(av[1]);
		for (int i = 1; i <= 9; i++)
			printf("%d x %d = %d\n", i, n, i * n);
	}
	else
		printf("\n");
	return (0);
}
	
