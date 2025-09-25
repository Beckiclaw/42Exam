#include <unistd.h>

void	rostring(char *str)
{
	int	i = 0;
	int	start;
	int	end;
	int	space;
	int	word;

	while(str[i] == ' ' || str[i] == '\t')
		i++;
	start = i;
	while(str[i] > 32)
		i++;
	end = i - 1;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while(str[i])
	{
		if(str[i] == ' ' || str[i] == '\t')
			space = 1;
		else
		{
			if(space == 1)
			{
				write(1, " ", 1);
				space = 0;
			}
			word = 1;
			write(1, &str[i], 1);
		}
		i++;
	}
	if(str[i] == '\0' && word == 1)
		write(1, " ", 1);
	while(start <= end)
	{
		write(1, &str[start], 1);
		start++;
	}
}

int	main(int ac, char **av)
{
	if(ac > 1)
	{
		rostring(av[1]);
	}
	write(1, "\n", 1);
	return(0);
}

