#include "stdio.h"
int	ft_find_max(int i, int mult)
{
	int j;

	j = 0;
	while(i + j * mult >= 0)
		j++;
	j--;
	if (mult == 1)
		return(i + j * mult);
	else
		return(ft_find_max(j * mult, mult / 10));

}

void ft_max_int(int begin)
{
	int	i;
	int	mult;

	i = 1;
	mult = 10;
	while(mult > 0)
	{
		mult = i * mult;
		i *= 10;
	}
	i = ft_find_max(begin, i);
	printf("%d", i);
}

int	main()
{
	ft_max_int(4);
	return (0);
}
