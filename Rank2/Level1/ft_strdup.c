#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	len = 0;
	int	i;
	char	*dup;

	while(src[len])
		len++;
	dup = malloc(sizeof(char) * (len + 1));
	if(!dup)
		return(NULL);
	i = 0;
	while(i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return(dup);
}
	
