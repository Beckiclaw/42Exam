#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;

	if(size < 2)
		return;
	i = 0;
	while(i < size - 1)
	{
		if(tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}
