#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	long long n = nbr;
	int	len = 0;
	char	*res;

	if(nbr <= 0)
		len++;
	while(n)
	{
		n = n / 10;
		len++;
	}
	res = malloc(sizeof(char) * (len + 1));
	if(!res)
		return(NULL);
	res[len] = '\0';
	if(nbr == 0)
	{
		res[0] = '0';
		return(res);
	}
	n = nbr;
	if(n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	while(n)
	{
		res[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return(res);
}

/*
char	*ft_itoa(int nbr)
{
 	char buf[32];
	sprintf(buf, "%d", nbr);
	return strdup(buf);
}*/

/*ft_itoa - Vamos a convertir un integrer a char. 
Declaramos 4 variables dentro de la función:
- Una variable long que llamaremos nb y será igual al int que recibimos y queremos transformar.
- Una variable long que llamaremos tmp y que usaremos de forma temporal.
- Una variable int para la longitud, llamada len y será igual a nb <= 0.
- Una variable de tipo char que es el str que vamos a obtener de nuestro int.

¡Empezamos!
- Si nb es menor que 0, igualamos nb a -nb.
- Nuestro tmp va a ser igual que nb
- Recorremos tmp mientras que sea mayor que 0.
	- tmp va a ser igual a tmp = tmp / 10;
	- iteramos tieso el len;
- Nuestro str es igual a malloc(sizeof(char) * (len + 1)); Porque necesitamos reservar memoria.
- Entonces, si str no existe, devolvemos NULL y a la porra. 
- El tamaño de str es nulo. str[len] == '\0';
- Si n es menor que 0
	- La posición 0 de str es un menos '-'
- Si nb es igual a 0.
	- La posición 0 de str es '0'.
- Mientras que nb sea mayor que 0
	-El tamaño de str desde atrás (str[--len] es igual al resto de nb entre 10 + 0
	-nb = nb / 10
- Devolvemos el str y a freír espárragos. 
