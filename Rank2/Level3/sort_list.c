#include <unistd.h>

typedef struct	s_list
{
	struct s_list	*next;
	int	data;
}	t_list;

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*head;
	int	tmp;

	if(!lst)
		return(0);
	head = lst;
	while(lst->next)
	{
		if(!cmp(lst->data, lst->next->data))
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = head;
		}
		lst = lst->next;
	}
	return(head);
}

/* sort_list (ordena una lista enlazada según una función de comparación)
 * Recibe:
 * - Un puntero al primer nodo de la lista (lst)
 * - Un puntero a una función cmp(a, b), que define el orden.
 *   cmp devuelve 1 (o cualquier otro valor que no sea 0), si a y b están en orden y 0 si no lo están.
 * Creamos:
 * - Un puntero head para guardar el inicio de la lista sin perder la referencia.
 * - Una variable tmp para intercambiar los valores de data.
 *
 * 1. Comprobamos si la lista existe. Si lst es NULL, devolvemos 0 y al carajo.
 * Guardamos el inicio de la lista con head = lst.
 * Empezamos el bucle mientras exista un siguiente nodo.
 * 	- Si cmp devuelve 0 (o sea, el orden no es correcto)
 * 		- Guardamos el valor actual en tmp.
 * 		- Intercambiamos los valores entre lst y lst->next.
 * 		- Por lo que lst->next pasa a ser el tmp ahora.
 * 		- Reiniciamos lst al principio, al head, para recorrer desde el inicio.
 * 	- Si cmp devuelve distinto de 0 (todo okay en orden)
 * 		- Avanzamos al siguiente nodo.
 * Al terminar, todo está ordenado, devolvemos head, que apunta al primer nodo.*/
