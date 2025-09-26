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
	int	swapped;

	if(size < 2)
		return;
	swapped = 1;
	while(swapped)
	{
		swapped = 0;
		i = 0;
		while(i + 1 < size)
		{
			if(tab[i] > tab[i + 1]);
			{
				ft_swap(&tab[i], &tab[i + 1]);
				swapped = 1;
			}
			i++;
		}
	}
}
