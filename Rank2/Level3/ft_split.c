#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str)
{
	char	**split = malloc(sizeof(char *) * 10000);
	int	i = 0;
	int	j;

	while(*str)
	{
		while(*str && *str <= ' ')
			str++;
		if(!*str)
			break;
		split[i] = malloc(sizeof(char) * 10000);
		j = 0;
		while(*str && *str > ' ')
		{
			split[i][j] = *str;
			j++;
			str++;
		}
		split[i][j] = '\0';
		i++;
	}
	split[i] = NULL;
	return(split);
}

int	main(int ac, char **av)
{
	char	**res;
	int	i = 0;

	if(ac == 2)
	{
		res = ft_split(av[1]);
		while(res[i])
			printf("%s\n", res[i++]);
	}
	return(0);
}

/* Ft_split - Dividir un string por espacios y devolverlo en un array de strings)
 * Recibe un string y devuelve un array de strings(char **)
 * Creamos una variable split** que será un array de punteros a char (trocitos)
 * Reservamos memoria para 10.000 punteros (por simplificar) así basto.
 * Creamos dos variables int:
 * 	i -> índice del array split (cada palabra)
 * 	j -> índice de cada palabra individual dentro de split[i].
 * Recorremos el string con un while(*str)
 * 	Si el carácter actual es menor o igual que un espacio. 
 * 		- iteramos to tieso el str++;
 * Si no queda nada por recorrer, salimos del bucle y al carajo. !*str pos break.
 * Ahora reservamos memoria para split[i]
 * ¡Reseteamos la j porque vamos a ir copiando las palabrejas!
 * Mientras el carácter actual sea mayor a un espacio, tenemos una palabra.
 * 	- Vamos copiando cada letra en split[i][j] = *str;
 * 	- Iteramos to tieso j y str;
 * Al salir del bucle, añadimos el nulo al final de la palabra, fin del string.
 * ¡Iteramos la i to tieso!
 * Cerramos nuestra llave, colocamos split[i] = NULL para marcar el final del array.
 * Return split.*/
