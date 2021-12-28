#include "stdio.h"
void	p(char str[])
{
	printf("%s", str);
}
int	main()
{
	char	str[] = "hello";
	char	*str1 = "heh\0";
	char	str2[5];
	int	*i = (int *)str1;

	printf("i %d", i[0]);
	p(str);
	p(str1);
	/*while (i < 6)
	{
		j = str[i];
		printf("%c", str[i]);
		printf("%d\n", j);
		i++;
	}
	//str1[3] = '@';
	//p(str1);*/
	return (0);
}
