#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;
	int	j;
	int	seen[256] = {0};

	if(ac == 3)
	{
		while(av[1][i])
		{
			unsigned char c = av[1][i];
			if(!seen[c])
			{
				j = 0;
				while(av[2][j])
				{
					if(av[2][j] == c)
					{
						write(1, &av[1][i], 1);
						seen[c] = 1;
						break;
					}
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
