#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if(ac == 2)
	{
		int	n = atoi(av[1]);
		int	f = 2;

		if(n == 1)
			printf("1");
		else
		{
			while(n > 1)
			{
				if(n % f == 0)
				{
					printf("%d", f);
					n /= f;
					if(n > 1)
						printf("*");
				}
				else
					f++;
			}
		}
	}
	printf("\n");
	return(0);
}

/* Fprime! Vamos a sacar los factores primos de un número. No shurmanos.
 * Recibimos un número positivo como argumento y tenemos que mostrar sus factores primos,
 * separados por *
 * 1. Lo primero, declaramos main. Solo trabajamos si ac == 2, es decir, un solo argumento.
 * Si no, imprimimos salto de línea al final y al carajo.
 * 2. ¡Vamos a necesitar dos variables! 
 * - int n que será el atoi del primer argumento.
 * - int f que será el factor empezando en 2. (Por el motivo que sea)
 * INT N. Convertimos el argumento a entero. Como recibimos una cadena, la pasamos a número con atoi.
 * n es el número que vamos a factorizar.
 * INT F. Declaramos un divisor (factor). f empieza en 2 porque es el primer número primo.
 * Será el factor actual que probamos para dividir n.
 * 3. Caso es pecial. Si el número es 1, no tiene divisores primos, por lo que imprimimos 1 y ya.
 * 4. Mientras el número sea mayor que 1. Queremos dividirlo hasta reducirlo a 1.
 * 5. Si el número es divisible entre el factor actual. ¡Hemos encontrado un f primo.
 * 	- So... Imprimimos el factor.
 * 	- Dividimos n entre ese factor pa buscar los demás.
 * 	- Si aún no llegamos a 1, imprimimos "*" para separarlos.
 * 6. Si el número no es divisible entre ese factor, pasamos al siguiente factor y seguimos probando.
 * - Los no primos no se dividirán y se saltan solos.
 * 7. ¡Cuando n llega a 1! ¡A la mierda el bucle! Get out.
 * 8. Imprimimos nuestro fucking maravilloso, wonderful, salto de línea. 
 *
 * Entonces:
 * 1. Empezamos con el número recibido.
 * 2. Probamos a dividirlo entre 2.
 * 3. Si se puede, lo dividimos e imprimimos el factor.
 * 4. Si no se puede, subimos al siguiente número y repetimos!
 * 5. Cuando ya no se pueda dividir más, po yaast*/
