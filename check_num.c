#include "stdio.h"
int	main()
{
	int	i;
	int	j = 100;
	char	c = '1';
	char	zero = '\0';
	float	percent = 100.00f;
	long	num_peop = 7896542467685 * 200;
	percent = num_peop / percent;
	scanf("%d", &i);
	printf("%d\n", i / j);
	printf("%f\n", i / 100.00);
	printf("%f\n", 100.00 / i);
	printf("%d\n", i * c);
	printf("e%e", i / num_peop);
	printf("%c\n", zero);
	printf("%s\n", zero);
	return (0);
}
