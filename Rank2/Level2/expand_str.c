#include <unistd.h>

static int	is_space(char c)
{
	return(c == ' ' || c == '\t');
}

int	main(int ac, char **av)
{
	int	i = 0;
	int	space = 0;

	if(ac == 2)
	{
		while(av[1][i] && is_space(av[1][i]))
			i++;
		while(av[1][i])
		{
			if(is_space(av[1][i]))
				space = 1;
			else
			{
				if(space)
				{
					write(1, "   ", 3);
					space = 0;
				}
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
