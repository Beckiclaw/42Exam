#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

char	*ft_itoa(int nbr)
{
	long	n;
	long	tmp;
	int		len;
	char	*str;

	n = nbr;                 // trabajar en long para evitar overflow con INT_MIN
	len = (n <= 0);          // 1 para '0' o para el signo '-'
	if (n < 0)
		n = -n;             // valor absoluto en long
	tmp = n;
	while (tmp > 0)          // contar dígitos
	{
		tmp /= 10;
		len++;
	}
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
		str[0] = '-';
	while (n > 0)            // rellenar de atrás hacia delante
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
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
