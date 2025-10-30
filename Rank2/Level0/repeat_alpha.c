#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if(ac == 2)
	{
		i = 0;
		while(av[1][i])
		{
			if(av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				j = 0;
				while(j < av[1][i] - 96)
				{
					write(1, &av[1][i], 1);
					j++;
				}
			}
			else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				j = 0;
				while(j < av[1][i] - '@')
				{
					write(1, &av[1][i], 1);
					j++;
				}
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}

/*
Hacemos un programa que imprima las letras del alfabeto repetidas según su posición.
Declaramos dos variables de tipo integrer i & j. 
Si el número de parámetros recibido es al menos 1 (ac == 2).
	- i es igual a 0.
	- Mientras que el argumento exista.
		- Si el argumento es mayor que 'a' y menor que 'z'.
			- j es igual a 0.
			- Mientras que j sea menor que el argumento - 96 (el character previo a 'a').
				- Escribimos la posición i del aergumento.
				- j++ joteamos to tieso.
		- Si el argumento es mayor que 'A' y menor que 'Z'.
			- j es igual a 0.
			- Mientras que j sea menor que el argumento menos el character previo a 'A' que es @.
				- Escribimos la posición i del argumento.
				- j++, joteamos to tieso.
		- En cualquier otro caso, escribe la posición i del argumento.
		- Iteramos tieso.
Escribimos salto de línea.
Return(0);*/

