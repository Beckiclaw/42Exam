#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;

	if(ac == 2)
	{
		while(av[1][i])
			i++;
		while(i--)
			write(1, &av[1][i], 1);
	}
	write(1, "\n", 1);
	return(0);
}

/*
Si recibimos al menos un parámetro, ac == 2.
	- Mientras que exista el argumento.
		- Iteramos tieso hasta el final.
	- Mientras que i--, vamos desde el final, al principio.
		- Escribimos la posición i del argumento.
Escribimos salto de línea.
return(0); */
