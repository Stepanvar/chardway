#include "stdio.h"
int	main()
{
	int	arr[] = {10, 56, 75, 80};
	int	arr2[5];
	int	i;

	i = 0;
	while (i < 9)
	{
		printf("%p", (void *)&(arr2[i]));
		printf(" %d\n", arr2[i]);
		i++;
	}
	return (0);
}
