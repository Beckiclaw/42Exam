#include <unistd.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	res = 0;
	int	sign = 1;
	int	value;

	while(str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
			value = str[i] - '0';
		else if(str[i] >= 'a' && str[i] <= 'f')
			value = str[i] - 'a' + 10;
		else if(str[i] >= 'A' && str[i] <= 'F')
			value = str[i] - 'A' + 10;
		else
			break;
		if(value >= str_base)
			break;
		res = res * str_base + value;
		i++;
	}
	return (res * sign);
}

