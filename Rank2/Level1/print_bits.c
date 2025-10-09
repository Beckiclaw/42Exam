#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char	bit;

	while(i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int	main(void)
{
	unsigned char octet = 3;
	print_bits(octet);
	write(1, "\n", 1);
}

/* print_bits (imprime un byte en binario)
 * Recibe un número tipo unsigned char (8 bits).
 * Creamos una variable i = 8 para contar los 8 bits. 
 * Mientras i decrece de 7 a 0:
 * 	- Desplazamos el número i veces a la derecha (octet >> i)
 * 	- hacemos un AND con 1 (& 1) para obtener solo el último bit (0 o 1)
 * 	- Le sumamos '0'/48 para convertirlo en carácter ('0' o '1')
 * 	- Lo imprimimos con write.
 * No añadimos salto de línea porque el enunciado lo prohíbe. ¡Pero lo podemos poner en el main!*/
