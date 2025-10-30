#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while(str[i])
		i++;
	return(i);
}

/*
Esta función cuenta cuántos carácteres hay en la cadena.
Declaramos una variable i.
Mientras que exista el string.
	- Iteramos to tieso.
Devolvemos la posición de i.*/
