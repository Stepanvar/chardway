#include "ex.h"
#include "stdlib.h"
#include "time.h"
#include "limits.h"
#include "unistd.h"

int	ft_print_num(int num)
{
	char	c;
	int	rem;

	rem = 0;
	if (num / 10 == 0)
	{
		c = (char) num + '0';
		write(1, &c, 1);
	}
	else
	{
		rem = num % 10;
		c = (char) rem + '0';
		ft_print_num(num / 10);
		write(1, &c, 1);
	}
	return (0);
}

void	ft_print_iarr(int ar[], int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		ft_print_num(ar[i]);
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
}

static void ft_fill_iarr(int ar[], int length)
{
	srand(time(0));
	int	i;

	i = 0;
	while (i < length)
	{
		ar[i] = rand();
		i++;
	}
}

static void	ft_print_carr(char ar[], int length)
{
	int	i;

	i = 0;
	while (i < length)
	{
		write(1, &(ar[i]), 1);
		write(1, "\n", 1);
		i++;
	}
}

static void	ft_fill_carr(char ar[], int len)
{
	int	i;

	i = 0;
	srand(time(0));
	while (i < len)
	{
		ar[i] = rand() % 94 + 32;
		i++;
	}

}

static int	*ft_fill_arr_stack(void)
{
	int	i[] = {5, 8, 9};
	return (i);
}

static int	*ft_fill_arr_heap(void)
{
	int	*i;

	i = (int *)malloc(sizeof(int) * 4);
	return (i);

}

static void put_ascii(void)
{
	char	c;
	int	i;

	i = 0;
	c = 0;
	while (i < 128)
	{
		printf("char %c ", c);
		printf("num %d\t", i);
		c++;
		i++;
	}
}

int	ft_arrays(void)
{
	int	len = 5;
	int	iar1[len];
	char	car1[len];
	int	*iars;
	int	*iarh;
	
	ft_fill_iarr(iar1, len);
	ft_print_iarr(iar1, len);
	ft_fill_carr(car1, len);
	ft_print_carr(car1, len);
	iarh = ft_fill_arr_heap();
	iars = ft_fill_arr_stack();
	//put_ascii();
	return (0);
}
