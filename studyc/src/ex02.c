#include "stdio.h"
static int	find_max_mult(void)
{
	int	i;
	int	max_mult;

	max_mult = 10;
	i = 0;
	while (i > 0)
	{
		i = 10 * max_mult;
		max_mult *= 10;
	}
	return (max_mult);
}

static int	find_max_num(int num, int mult)
{
	int	j;

	j = 5;
	if (num + j * mult >= 0)
	{
		while (num + j * mult >= 0)
			j++;
		j--;
	}
	else
	{
		while (num + j * mult < 0)
			j--;
		j++;
	}
	if (mult == 1)
		return (num + j * mult);
	else
		return(find_max_num(j * mult, mult / 10));
}

void	ft_find_max(void)
{
	int	max_mult;
	int	num;

	max_mult = find_max_mult();
	num = find_max_num(0, max_mult);
	printf("%d\n", num);	
}

