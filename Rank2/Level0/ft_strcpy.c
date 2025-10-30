#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*
Hacemos una función que copia una cadena en otra.
Declaramos una variable de tipo integrer i.
Mientras que exista s2[i].
	- S1[i] es igual a S2[i]
	- Iteramos to tieso para obtener toda la cadena.
Le ponemos el nulo al final a s1[i]
Devolvemos s1.
*/
