#include <unistd.h>

static void	str_capitalizer(char *s)
{
	int	i = 0;
	int	new_word = 1;
	char	c;

	while(s[i])
	{
		c = s[i];
		if(c >= 'A' && c <= 'Z')
			c += 32;
		if(new_word && c >= 'a' && c <= 'z')
			c -= 32;
		write(1, &c, 1);
		if(c == ' ' || c == '\t')
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
}

int	main(int ac, char **av)
{
	int 	i = 1;
	
	if(ac > 1)
	{
		while(i < ac)
		{
			str_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
