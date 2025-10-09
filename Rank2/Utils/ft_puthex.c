#include <unistd.h>
#include <stdlib.h>

void	ft_puthex(unsigned int n)
{
	char	*hex = "0123456789abcdef";

	if(n >= 16)
		ft_puthex(n / 16);
	write(1, &hex[n % 16], 1);
}

