#include <unistd.h>

void	putnbr(int n)
{
	long	nb;
	char	c;

	nb = n;
	if(nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if(nb >= 10)
		putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

/* Putnbr recibe un número y lo imprime. Recibe un integrer n.
Le damos dos variables más. 
- Un long nb que vamos a usar como si fuese n.
- Un char c que usaremos para escribir.

¡Lo primero es igualar nb a n! nb = n
Primero vemos si nuestro número es negativo.
¿Es nb menor que cero?
	SI,si, escribimos un - delante.
	Igualamos nb a -nb.
¿Es nb mayor o igual a 10? 
	Si, sí, llamamos a putnbr y dividimos el número en cuestión entre 10. 
Nuestro character c va a ser igual al resto de la división de nb entre 10, + '0'.
Escribimos la posisión del char c.
Weee ya lo tienes! */
