#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*Hacemos un swap entre punteros.
Trabajamos con una variable temporal, tmp, tipo integrer.
tmp es igual al puntero de a.
El puntero de a es igual a b.
El puntero de b es igual a tmp. */
