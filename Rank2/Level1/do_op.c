#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int	i = 0;

	if(ac == 4)
	{
		switch(av[2][0])
		{
			case '+':
				printf("%d", atoi(av[1]), + atoi(av[3]));
				break;
			case '-':
				printf("%d", atoi(av[1]), - atoi(av[3]));
                                break;
			case '*':
				printf("%d", atoi(av[1]), * atoi(av[3]));
                                break;
			case '/':
				printf("%d", atoi(av[1]), / atoi(av[3]));
                                break;
			case '%':
				printf("%d", atoi(av[1]), % atoi(av[3]));
                                break;
		}
	}
	printf("\n");
}
