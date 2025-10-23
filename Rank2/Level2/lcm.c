#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int	gcd(unsigned int a, unsigned int b)
{
	while(b != 0)
	{
		unsigned int	tmp = a % b;
		a = b;
		b = tmp;
	}
	return (a);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	if(a == 0 || b == 0)
		return (0);
	return((a / gcd(a,b)) * b);
}

int	main(int ac, char **av)
{
	if(ac == 3)
	{
		unsigned int	a = atoi(av[1]);
		unsigned int	b = atoi(av[2]);

		printf("%u\n", lcm(a, b));
	}
	else
		printf("\n");
	return(0);
}
