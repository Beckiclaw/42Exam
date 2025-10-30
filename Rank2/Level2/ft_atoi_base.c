#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	res = 0;
	int	sign = 1;
	int	value;

	while(str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
			value = str[i] - '0';
		else if(str[i] >= 'a' && str[i] <= 'f')
			value = str[i] - 'a' + 10;
		else if(str[i] >= 'A' && str[i] <= 'F')
			value = str[i] - 'A' + 10;
		else
			break;
		if(value >= str_base)
			break;
		res = res * str_base + value;
		i++;
	}
	return (res * sign);
}

/*
ALTERNATIVAS para calcular value:

1. CON TERNARIO (una línea):
	value = (str[i] >= '0' && str[i] <= '9') ? str[i] - '0' :
	        (str[i] >= 'a' && str[i] <= 'f') ? str[i] - 'a' + 10 :
	        (str[i] >= 'A' && str[i] <= 'F') ? str[i] - 'A' + 10 : -1;

2. CON SWITCH (si tienes disponible):
	switch(str[i])
	{
		case '0': case '1': ... case '9':
			value = str[i] - '0';
			break;
		case 'a': case 'b': ... case 'f':
			value = str[i] - 'a' + 10;
			break;
		...
	}

3. CON FUNCIÓN AUXILIAR (más limpio):
	int get_value(char c)
	{
		if(c >= '0' && c <= '9')
			return (c - '0');
		if(c >= 'a' && c <= 'f')
			return (c - 'a' + 10);
		if(c >= 'A' && c <= 'F')
			return (c - 'A' + 10);
		return (-1);
	}

4. CON BÚSQUEDA EN STRING (alternativa creativa):
	const char *digits = "0123456789abcdefABCDEF";
	char *pos = ft_strchr(digits, str[i]);
	if (pos)
	{
		value = (pos - digits);
		if (value > 15)
			value -= 6;  // Ajustar mayúsculas
	}

La más común es TERNARIO (opción 1) o la función auxiliar (opción 3).
*/

int	main(void)
{
	printf("%d\n", ft_atoi_base("--223", 16));
	return (0);
}

