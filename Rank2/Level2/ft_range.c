#include <stdlib.h>

int	*ft_range(int start, int end)
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
		tab[i] = start;
		if(start < end)
			start++;
		else
			start--;
		i++;
	}
	return(tab);
}
