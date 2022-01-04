#include "stdio.h"
static long	find_max_mult(void)
{
	long	i;
	long	max_mult;

	max_mult = 10;
	i = 0;
	while (i >= 0)
	{
		max_mult *= 10;
		i = 10 * max_mult;
	}
	return (max_mult);
}

static long	find_max_num(long num, long mult)
{
	long	j;

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
		return (num + j * mult - 1);
	else
		return(find_max_num(num + j * mult, mult / 10));
}

long	ft_find_max(void)
{
	long	max_mult;
	long	num;

	max_mult = find_max_mult();
	num = find_max_num(0, max_mult);
	printf("%ld\n", num);
	return (num);
}

