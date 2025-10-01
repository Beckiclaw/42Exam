#include <unistd.h>

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int	max_value;
	
	if(len == 0)
		return(0);
	max_value = tab[0];
	i = 1;
	while(i < len)
	{
		if(tab[i] > max_value)
			max_value = tab[i];
		i++;
	}
	return(max_value);
}
/* Max encuentra el entero con más valor en una tabla de enteros.
Recibe una tabla de integrers y un len sin signo.
Le damos 2 variables extra:
- Un índice, unsigned int i;
- Un integrer que represente el valor máximo encontrado: max_value;

Primero, si len (el tamaño) es == a cero, entonces vamos a devolver 0.
Vamos a inicializar nuestro max_value para que sea igual que el número de la posición 0 en la tabla
También inicializamos i para que empiece en tamaño 1, sino tendría que compararse consigo mismo.
Iniciamos el recorrido por el tamaño de nuestra tabla.
	Mientras que i sea menor que el tamaño.
		Comprobamos SI tab[i] (el número de la posición en la que estamos es más grande 
		que el máx_value actual, o sea, el de la posición anterior.
			Si es más grande, max_value pasa a ser el tab[i] actual.
		Iteramos to tieso.
Al terminar de recorrer, simplemente devolvemos el valor máximo encontrado. */
