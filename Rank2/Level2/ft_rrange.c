#include <unistd.h>

int	*ft_rrange(int start, int end)
{
	int	size;
	int	*tab;
	int	i;

	size = (start <= end) ? (end - start + 1) : (start - end + 1);
	tab = malloc(sizeof(int) * size);
	if(!tab)
		return(NULL);
	i = 0;
	while(i < size)
	{
		tab[i] = end;
		if(start <= end)
			end--;
		else
			end++;
		i++;
	}
	return (tab);
}

/* ft_range (crear un array de enteros entre start y end)
 * Recibe dos enteros: start y end.
 * Devuelve un puntero a un array dinámico (malloc) que contiene los números consecutivos
 * desde start, hasta end, incluyendo extremos.
 * Creamos tres variables:
 *      - size -> la cantidad de números entre start y end (end - start + 1)
 *      - *tab -> el puntero al array donde guardaremos los números.
 *      - i -> un índice para recorrer el array.
 * 1. Calculamos el tamaño:
 *      size = Hacemos la pregunta ¿start es menor o igual a end?
 *              Si la respuesta es que si : end - start + 1
 *              Si la respuesta es que no : start - end + 1
 * 2. Reservamos memoria con malloc para nuestra tabla de números:
 *              malloc(sizeof(int) * size);
 *              O sea, reservamos memoria para 'size' enteros.
 * 3. Rellenamos el array:
 *      - tab[i] = start; Nuestra primera posición, es el comienzo.
 *      - Si start es < end, restamos 1 en cada paso a end (end--);
 *      - Si start es > end, sumamos 1 en cada paso (end++);
 *      Así añadimos números uno a uno.                                                                * 4. Devolvemos el puntero 'tab' con todos los valores dentro. */
