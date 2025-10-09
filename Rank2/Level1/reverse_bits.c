#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res = 0;
	int	i = 8;

	while(i--)
	{
		res = (res << 1) | (octet & 1);
		octet >>= 1;
	}
	return(res);
}

/* reverse_bit (invierte los bits de un byte)
 * Recibe un número tipo unsigned char (8 bits) y devuelve otro con los bits en orden inverso.
 * Creamos:
 * 	- res = 0 -> para almacenar el nuevo byte.
 * 	- i = 8 -> porque un byte tiene 8 bits.
 * Mientras i decrece:
 * 	- Tomamos el último bit de octet con (octet & 1)
 * 	- Desplazamos res una posición a la izquierda (res << 1)
 * 	- Añadimos ese bit con el operador OR (|) que une los bits uno a uno.
 * 	- Desplazamos octet una posición a la derecha (octet >> 1) para leer el siguiente bit.
 * Al finalizar, devolvemos res, que ahora contiene los bits al revés.*/
