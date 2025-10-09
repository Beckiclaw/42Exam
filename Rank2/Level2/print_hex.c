#include <unistd.h>

void	ft_puthex(unsigned int n)
{
	char	*hex = "0123456789abcdef";

	if(n >= 16)
		ft_puthex(n / 16);
	write(1, &hex[n % 16], 1);
}

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		unsigned int	n = ft_atoi(av[1]);
		ft_puthex(n);
	}
	write(1, "\n", 1);
	return(0);
}

/*
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
*/
