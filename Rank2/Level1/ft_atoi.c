#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while(str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
			i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return(res * sign);
}

/*Atoi (Pasar de character to integrer) 
Recibe un string (constant char) y devuelve un integrer.
Le damos 3 variables de tipo integrer. 
- Un índice para recorrer el string recibido. El índice comienza en la posición 0. 
- Un signo para determinar si el número que devolvemos es positivo o negativo. El signo será 1 o -1.
- Un res (o result) para obtener nuestro número definitivo. El res comienza en 0.

Iniciamos la función recorriendo el string con un bucle while.
	Si encontramos espacio o bien es tabulador o carriage ret.
		Iteramos to tieso.
Comprobamos si hay signo. Positivo o Negativo.
	Si el signo es negativo, igualamos nuestra variable sign a -1.
	E iteramos to tieso.
Recorremos de nuevo el bucle cuando nuestro string sea mayor igual a 0 y menor igual a 9.
	Obtenemos res, multiplicando res x 10 y sumándole el (string - '0')
	Iteramos to tieso.
¡Devolvemos el resultado multiplicado por el signo! Y obtenemos nuestro integrer :D.*/

