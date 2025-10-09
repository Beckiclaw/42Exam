#include <unistd.h>
#include <stdio.h>

typedef struct	s_list
{
	struct s_list	*next;
	void	*data;
}	t_list;

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while(begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

void	print_data(void *data)
{
	printf("%s\n", (char *)data);
}

int	main(void)
{
	t_list	a, b, c;

	a.data = "Hola";
	b.data = "Susia";
	c.data = "guarra";

	a.next = &b;
	b.next = &c;
	c.next = NULL;

	ft_list_foreach(&a, &print_data);
	return(0);
}

/*ft_list_foreach (aplica una función a cada elemento de una lista enlazada)
 * Creamos un bucle que recorre la lista nodo a nodo.
 * Mientras begin_list no sea NULL, o sea, que exista.
 * 	- Aplicamos la función pasada por parámetros a los datos del nodo actual.
 * 	- Avanzamos al siguiente nodo -> begin_list = begin_list->next;
 * Cuando el puntero llega a NULL, hemos recorrido todo. */
