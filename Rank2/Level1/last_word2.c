#include <unistd.h>

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		int 	i;

		i = 0;
		while(av[1][i])
			i++;
		i--;
		while(av[1][i] == ' ' || av[1][i] == '\t')
			i--;
		while(av[1][i] > ' ')
			i--;
		i++;
		while(av[1][i] && av[1][i] > ' ')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}

/*
Este programa encuentra la última palabra de un string. 
En principio, si solo recibe un argumento. Es decir ac == 2, porque el nombre del programa es otro.
Le damos una variable de tipo integrer que será un índice i, lo igualamos a 0, primera posición.
Recorremos el primer argumento. 
	Iteramos to tieso hasta el final.
Iteramos patrás una posición.
Recorremos el primer argumento de nuevo si es mayor que 32 ASCII, Mayor que espacio, vaya. 
	Iteramos patrás a tope.
Iteramos to tieso una posición.
Recorremos otra vez, si existe y además es mayor que espacio. 
	¡Escribimos la posiciónm del argumento!
	Iteramos to tieso.
Escribimos nuestro salto de línea y devolvemos 0. 		 
