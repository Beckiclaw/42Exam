#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr(int n)
{
	long	nb;
	char	c;

	nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

static int	is_prime(int n)
{
	int	i;

	if (n < 2)
		return (0);
	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		int	n = ft_atoi(av[1]);
		int	sum = 0;
		int	i = 2;

		while (i <= n)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
		ft_putnbr(sum);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}

/*int	main(int ac, char **av)
{
	int	n;
	int	p;
	int	sum;

	n = 0;
	p = 0;
	sum = 0;

	if(ac != 2 || (n = atoi(av[1])) <= 0)
		return(printf("0\n"), 0);
	for (p = 2; p <= n; p++)
	{
		int	i = 2, prime = 1;
		while(i * i <= p)
			if(p % i++ == 0)
				prime = 0;
		if(prime)
			sum += p;
	}
	printf("%d\n", sum);
	return(0);
}

//OTHER

int	is_prime(int n)
{
	int	i;

	if(n < 2)
		return(0);
	i = 2;
	while(i * i <= n)
	{
		if(n % i == 0)
			return(0);
		i++;
	}
	return(1);
}

int	main(int ac, char **av)
{
	int	n;
	int	sum;
	int	p;

	if(ac != 2)
	{
		printf("0\n");
		return(0);
	}
	n = atoi(av[1]);
	if(n <= 0)
	{
		printf("0\n");
		return(0);
	}
	sum = 0;
	for(p = 2; p <= n; p++)
		if(is_prime(p))
			sum += p;
	printf("%d\n", sum);
	return(0);
}*/
