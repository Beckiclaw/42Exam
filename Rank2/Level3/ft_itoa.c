#include <stdlib.h>

char	*ft_itoa(int n)
{
	long	nb = n;
	long	tmp;
	int	len = (nb <= 0);
	char	*str;

	if (nb < 0)
		nb = -nb;             // valor absoluto en long
	tmp = nb;
	while (tmp > 0)          // contar dígitos
	{
		tmp /= 10;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)            // rellenar de atrás hacia delante
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

/*
char	*ft_itoa(int nbr)
{
 	char buf[32];
	sprintf(buf, "%d", nbr);
	return strdup(buf);
}
