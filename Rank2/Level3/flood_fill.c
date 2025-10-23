#include <unistd.h>
#include <stdio.h>

#ifndef FLOOD_FILL_H
# define FLOOD_FILL_H

typedef struct s_point
{
	int x;
	int y;
}	t_point;

void	fill(char **tab, t_point size, char target, int y, int x);
void	flood_fill(char **tab, t_point size, t_point begin);

#endif

void	fill(char **tab, t_point size, char target, int y, int x)
{
	if(y < 0 || x < 0 || y >= size.y || x >= size.x)
		return;
	if(tab[y][x] != target || tab[y][x] == 'F')
		return;
	tab[y][x] = 'F';

	fill(tab, size, target, y - 1, x);
	fill(tab, size, target, y + 1, x);
	fill(tab, size, target, y, x - 1);
	fill(tab, size, target, y, x + 1);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	target = tab[begin.y][begin.x];
	fill(tab, size, target, begin.y, begin.x);
}

int	main(void)
{
	char l0[] = "11111";
	char l1[] = "10001";
	char l2[] = "10101";
	char l3[] = "10001";
	char l4[] = "11111";
	char	*tab[] = {l0, l1, l2, l3, l4};
	t_point	size = {5, 5};
	t_point	begin = {1, 1};

	flood_fill(tab, size, begin);

	printf("%s\n", tab[0]);
	printf("%s\n", tab[1]);
	printf("%s\n", tab[2]);
	printf("%s\n", tab[3]);
	printf("%s\n", tab[4]);
	return(0);
}
