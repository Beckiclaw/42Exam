#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0')
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
			}
			else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
			}
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i = 1;
	int	j = 0;

	if (ac > 1)
	{
		while (i < ac)
		{
			rstr_capitalizer(av[i]);
			j = 0;
			while (av[i][j])
			{
				write(1, &av[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
