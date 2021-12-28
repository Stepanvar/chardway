#include "stdio.h"
int	ft_while(char str[])
{
	int	i;

	i = 0;
	printf("str%s\n", str);
	while (i < 5)
	{
		i++;
	}
	return (i);

}

int	main()
{
	int	i_ar[5] = {10, 35, 60, 450};
	int	i_ar2[5];
	char	str[] = "good luck, have fun";
	char	*str1;
	int	i = 0;

	//printf("%d\n", i);
	str1 = "not at all bro\0";
	str[1] = 'u';
	printf("str %s", str);
	printf("str1 + 1 %c", *(str1 + 1));
	//printf("%d", ft_while(str));
	while (i < 4)
	{
		printf("%d\n", i_ar[i]);
		i++;
	}

}
