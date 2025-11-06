#include <unistd.h>
#include <stdlib.h>

char	**ft_split(char *str)
{
	char	**split = malloc(sizeof(char *) * 10000);
	int	i = 0;
	int	j;

	while(*str)
	{
		while(*str && *str <= ' ')
			str++;
		if(!*str)
			break;
		split[i] = malloc(sizeof(char) * 10000);
		j = 0;
		while(*str && *str > ' ')
		{
			split[i][j] = *str;
			j++;
			str++;
		}
		split[i][j] = '\0';
		i++;
	}
	split[i] = NULL;
	return(split);
}

void	ft_putstr(char *str)
{
	int	i = 0;
	while(str[i])
		write(1, &str[i++], 1);
}

void	print_rot(char	**word)
{
	int	total = 0;
	int	wordi;

	while(word[total])
		total++;
	if(total == 0)
		return;
	wordi = 1;
	while(wordi < total)
	{
		ft_putstr(word[wordi]);
		ft_putstr(" ");
		wordi++;
	}
	ft_putstr(word[0]);
}

int	main(int ac, char **av)
{
	char	**word;
	if(ac > 1)
	{
		word = ft_split(av[1]);
		print_rot(word);
	}
	write(1, "\n", 1);
	return(0);
}
-----------------------

void	rostring(char *str)
{
	int	i = 0;
	int	start;
	int	end;
	int	space = 0;
	int	word = 0;

	while(str[i] == ' ' || str[i] == '\t')
		i++;
	start = i;
	while(str[i] && str[i] > 32)
		i++;
	end = i - 1;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while(str[i])
	{
		if(str[i] == ' ' || str[i] == '\t')
			space = 1;
		else
		{
			if(space == 1 && word == 1)
				write(1, " ", 1);
			write(1, &str[i], 1);
			space = 0;
			word = 1;
		}
		i++;
	}
	if(start <= end)
	{
		if(word == 1)
			write(1, " ", 1);
		while(start <= end)
		{
			write(1, &str[start], 1);
			start++;
		}
	}
}

int	main(int ac, char **av)
{
	if(ac > 1)
	{
		rostring(av[1]);
	}
	write(1, "\n", 1);
	return(0);
}
*/
