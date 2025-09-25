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
