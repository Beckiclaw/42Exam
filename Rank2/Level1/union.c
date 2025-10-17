#include <unistd.h>

int	main(int ac, char **av)
{
	int	seen[256] = {0};
	int	i;

	if(ac == 3)
	{
		i = 0;
		while(av[1][i])
		{
			if(!seen[(unsigned char)av[1][i]])
			{
				seen[(unsigned char)av[1][i]] = 1;
				write(1, &av[1][i], 1);
			}
			i++;
		}
		i = 0;
		while(av[2][i])
		{
			if(!seen[(unsigned char)av[2][i]])
			{
				seen[(unsigned char)av[2][i]] = 1;
				write(1, &av[2][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
