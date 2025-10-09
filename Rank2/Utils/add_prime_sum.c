#include <unistd.h>

void	putnbr(int n)
{
	long	nb;
	char	digit;

	nb = n;
	if(nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if(nb >= 10)
		putnbr(nb / 10);
	digit = (nb % 10) + '0';
	write(1, &digit, 1);
}

int	ft_atoi(const char *str)
{
	int	i = 0;
	int	res = 0;
	int	sign = 1;

	while(str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
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
	return(res * sign);
}

static int	is_prime(int n)
{
	int	i;

	if(n < 2)
		return(0);
	i = 2;
	while(i <= n / i)
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
	int	p = 0;
	int	sum = 0;

	if(ac != 2 || (n = ft_atoi(av[1])) <= 0)
	{
		write(1, "0\n", 2);
		return(0);
	}
	sum = 0;
	p = 2;
	while(p <= n)
	{
		if(is_prime(p))
			sum = sum + p;
		p++;
	}
	putnbr(sum);
	write(1, "\n", 1);
	return(0);
}

