#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_list
{
	struct s_list	*next;
	void	*data;
}	t_list;

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;

	while(*begin_list)
	{
		if((*cmp)((*begin_list)->data, data_ref) == 0)
		{
			tmp = *begin_list;
			*begin_list = (*begin_list)->next;
			free(tmp);
		}
		else
			begin_list = &((*begin_list)->next);
	}
}

int	cmp_str(void *a, void *b)
{
	return(strcmp((char *)a, (char *)b));
}

int	main(void)
{
	t_list a, b, c;
	t_list *list = &a;

	a.data = "Hola";
	b.data = "Pedazo";
	c.data = "Perra";

	a.next = &b;
	b.next = &c;
	c.next = NULL;

	ft_list_remove_if(&list, "Hola", cmp_str);

	while(list)
	{
		printf("%s\n", (char *)list->data);
		list = list->next;
	}
	return(0);
}
