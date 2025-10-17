#include <unistd.h> /*Si quieres hacerlo con write*/
#include <stdio.h> /*Si quieres usar printf*/

/*CON WRITE

int	main(void)
{
	write(1, "z\n", 2);
	return(0);
}

CON PRINTF

int	main(void)
{
	printf("z\n");
	return(0);
}

ESCRIBE UN STRING 

int	main(void)
{
	char	*str = "Hola Esther, me pica el chichi\n";
	int	i = 0;

	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return(0);
}

ESCRIBE UN STRING QUE RECIBA MEDIANTE UN ARGUMENTO

int	main(int ac, char **av)
{
	int	i = 0;
	if(ac == 2)
	{
		while(av[1][i])
		{
			write(1, &av[1][i], 1);
			i++;
		}
		av++;
	}
	write(1, "\n", 1);
}

ESCRIBE TODOS LOS STRINGS RECIBIDOS MEDIANTE CUALQUIER NÚMERO DE ARGUMENTOS*/

int	main(int ac, char **av)
{
	int	i = 1;
	int	j;

	while(i < ac)
	{
		j = 0;
		while(av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		if(i < ac - 1)
			write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
	return(0);
}

