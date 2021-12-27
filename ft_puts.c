#include "ft_puts.h"
#include "unistd.h"
#include "stdlib.h"
#include "stdio.h"
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_length(char *str)
{
	int length = 0;

	while(str[length])
		length++;
	return (length);
}

void	*ft_calloc(unsigned int length, unsigned int el_size)
{
	char	*ptr;
	int	i = 0;

	ptr = (char *)malloc(length * el_size);
	if (!ptr)
		return (NULL);
	while (ptr[i])
	{
		ptr[i] = '\0';
		i++;
	}
	return((void *)ptr);
}

char *ft_reverse(char *str)
{
	char	*rev;
	int	i = 0;
	int	length;

	length = ft_length(str);
	rev = ft_calloc(ft_length(str), sizeof(char));
	while (i < length)
	{
		rev[i] = str[length - i];
		i++;
	}
	return (rev);
}

int	main()
{
	int	i;
	int	j = 100;
	char	c = '1';
	float	percent = 100.00f;
	double	num_peop = 78965424.67685;
	percent = num_peop / percent;
	scanf("%d", &i);
	printf("%d\n", i / j);
	printf("%f\n", i / 100.00);
	printf("%d\n", i * c);

	return (0);
}

