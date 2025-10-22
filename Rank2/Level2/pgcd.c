#include <stdio.h>
#include <stdlib.h>

unsigned int	gcd(unsigned int a, unsigned int b)
{
	while(b != 0)
	{
		unsigned int	tmp = a % b;
		a = b;
		b = tmp;
	}
	return(a);
}

int	main(int ac, char **av)
{
	int	a = atoi(av[1]);
	int	b = atoi(av[2]);

	if(ac == 3)
		printf("%u\n", gcd(a, b));
	else
		printf("\n");
	return(0);
}
