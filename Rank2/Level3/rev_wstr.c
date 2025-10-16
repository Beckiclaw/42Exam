#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	start;
	int	end;
	int	word = 0;

	if(ac == 2)
	{
		i = 0;
		while(av[1][i])
			i++;
		i--;
		while(i >= 0)
		{
			while(i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
				i--;
			end = i;
			while(i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
				i--;
			start = i + 1;
			if(start <= end)
			{
				if(word)
					write(1, " ", 1);
				write(1, &av[1][start], end - start + 1);
				word = 1;
			}
		}
	}
	write(1, "\n", 1);
	return(0);
}

/* rev_wstr (imprime palabras en orden inverso)
 * Recibe una cadena como argumento y muestra las palabras, desde la última hasta la primera.
 * Creamos cuatro variables de tipo integrer:
 * 	- i -> recorre la cadena.
 * 	- start -> marca el inicio de cada palabra
 * 	- end -> marca el final de cada palabra.
	- word -> palabro nueva, es una bandera, la igualamos a 0 hasta que tengamos una palabro.
 * 1. Comprobamos que hay un solo argumento.
 * 2. Recorremos el argumento porque existe. i++ hasta el final.
 2.1 i--; para ir a antes del nulo. 
 * 3. Mientras que i >= 0 recorremos hacia atrás.
 * 	- (Mientras) Saltamos espacios y tabs. Iteramos patrás.
 * 	- Guardamos en end la última letra de la palabra.
 * 	- (Mientras) Retrocedemos hasta el inicio de la palabra. Iteramos patrás.
 * 	- Guardamos en start la posición de i + 1, para marcar la primera letra de la palabra.
 * 	- SI start es menor o igual a end
		- Si word existe.
			- Escribimos un espacio.
		- Escribimos &av[1][start] con el size de end - start + 1.
 * 	- la flag word = 1;
 * 	- Salimos del bucle, salto de línea, return 0. */
