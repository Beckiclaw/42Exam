#include <unistd.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	const char	*p;

	if(!s1 || !s2) /*Unnecesary*/
		return(0);
	if(*s2 == '\0') /*Unnecesary*/
		return(0);
	while(*s1)  /*From here*/
	{
		p = s2;
		while(*p)
		{
			if(*p == *s1)
				return((char *)s1);
			p++;
		}
		s1++;
	}
	return(0);
}
/*
ft_strpbrk (Busca el primer carácter que pertenezca a otro string)
Recibe dos strings (const char) y devuelve un puntero al primer carácter de s1 que también exista en s2. Si no encuentra ninguno, devuelve NULL(0).

Variables que usamos:
- Un puntero s1 que recorre el primer string (frase principal en la que buscamos).
- Un puntero s2 que recorre el segundo string (la lista de caracteres que queremos comprobar).
- Un puntero p, que vamos a igualar a s2.

Lógica paso a paso:
1. Si no existe la primera cadena o la segunda, no podemos hacer nah, así que return (0);
2. Si la dirección de memoria de s2 es nulo, po tampoco podemos hacer nah, así que... return(0);
3. Empezamos a recorrer s1 desde el principio.
4. Por cada carácter de s1, recorremos todo p - while(*p)
5. Comprobamos cada carácter de s2/p, tal que así:
- Si p es igual que s1, ese carácter existe en s2.
	- En ese caso, devolvemos un puntero a esa posición de s1 : return(char*)s1
-iteramos p to tieso.
6. Salimos del bucle, si no coincide con ninguno en s2, seguimos con el siguiente carácter de s1.
7. Si no encontramos nada, devolvemos return (0) y listo.   */

//CON ÍNDICES//

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;
	int	j;

	while(s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if(s1[i] == s2[j])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}

