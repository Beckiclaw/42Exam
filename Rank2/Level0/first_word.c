#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if(ac == 2)
	{
		while(av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while(av[1][i] && av[1][i] > ' ')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

/*
Declaramos una variable de tipo integrer 'i'. 
Si tenemos al menos 1 parámetro recibido (ac == 2)
	Mientras que el argumento sea igual a espacio o a tabulador.
		- Iteramos to tieso.
	Mientras que el argumento sea mayor que espacio.
		- Escribimos la posición i del primer argumento.
		- Iteramos to tieso.
Escribimos un salto de línea pase lo que pase.
Return(0) para finiquitar el programa. 
*/
