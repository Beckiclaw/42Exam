#include <unistd.h>

static void	str_capitalizer(char *str)
{
	int	i = 0;
	int	new_word = 1;
	char	c;

	while(str[i])
	{
		c = str[i];
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

/*
void	str_capitalizer(char *str)
{
	int i = 0;
	int	prev_is_sep;

	while (str[i])
	{
		prev_is_sep = (i == 0) || (str[i - 1] == ' ' || str[i - 1] == '\t');
		
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (prev_is_sep)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
			}
			else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
			}
		}
		i++;
	}
}
*/

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
