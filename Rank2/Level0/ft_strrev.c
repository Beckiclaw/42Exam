#include <stdio.h>

(Modifica el original)
char	*ft_strrev(char *str)
{
	int	i;
	int	len = 0;
	char	tmp;

	while(str[len])
		len++;
	i = 0;
	len--;
	while(i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return(str);
}

(Crea una copia invertida)
char	*ft_strrev(char *str)
{
	int	i = 0;
	int	len = 0;
	char	*rev;
	
	while(str[len])
		len++;
	rev = malloc (sizeof(char) * (len + 1));
	if(!rev)
		return(NULL);
	while(len > 0)
	{
		rev[i++] = str[len - 1];
		len--;
	}
	rev[i] = '\0';
	return(rev);
}
		

/*
Modificar el original --
Declaramos dos variables de tipo integrer, un índice i y len para el tamaño. 
Declaramos una variable de tipo char tmp.
Mientras que str[len], len++ para recorrer el tamaño.
Inicializamos i en 0.
Hacemos un len-- para ponernos en la última posición previa al nulo.
Mientras que i sea menor que el tamaño.
	- tmp es igual a la posición del string.
	- La posición del string es igual al tamaño de del string.
	- El tamaño del string es igual a tmp.
	- Iteramos tieso.
	- Recorremos el tamaño hacia atrás.
Devolvemos el string.

Crear copia invertida -- 
Esta función invierte una cadena (string) de caracteres. Claudia = aidualC.
Si o si calculamos la longitud del str[len]
Reservamos espacio para el nuevo string + el nulo.
Mientras que el tamaño sea mayor que cero
	- rev[i++] es igual que el tamaño del string menos 1, o sea, el final.
	- Recorremos len hacia atrás con len--;
	(Copiamos al revés desde el final del str hasta el inicio.)
Añadimos terminador nulo.
Devolvemos el nuevo string.
*/
