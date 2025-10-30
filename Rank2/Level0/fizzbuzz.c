#include <unistd.h>

void	ft_putnbr(int n)
{	
	long	nb;
	char	c;

	nb = n;
	if(nb < 0)
	{
		write(1, "-", 1);
		nb = - nb;
	}
	if(nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while(i <= 100)
	{
		if(i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if(i % 3 == 0)
			write(1, "fizz", 4);
		else if(i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}

/*
Hacemos un putnbr. Que recibe un int n. 
Declaramos dos variables, una variable long nb y otra tipo character c. 
- nb es igual a n.
Si nb es menor que 0, significa que es negativo.
	- Escribimos un "-".
	- nb es -nb
Si nb es mayor o igual que 10.
	- Llamamos a la propia ft_putnbr y dividimos nb entre 10.
El characer c es igual a nb % 10 + '0'
Escribe la posición del cáracter c. 

Nuestro programa fizzbuzz.
Declaramos una variable de tipo integrer i que es igual a 1, porque el programa va del 1 al 100. 
Mientras que i sea menor o igual a 100.
	- Si i porcentaje de 15 igual igual a 0.
		- Escribimos fizzbuzz.
	- Si i porcentaje de 3 es igual igual a 0.
		- Escribimos fizz.
	- Si i porcentaje de 5 es igual igual a 0.
		- Escribimos buzz.
	- Sino, llamamos a ft_putnbr(i)
	- Escribimos un salto de línea.
	- Iteramos to tieso para escribir cada número.
Return(0) para finiquitar.*/ 
