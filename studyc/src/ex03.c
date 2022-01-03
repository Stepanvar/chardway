#include "ex.h"
#include "stdio.h"
#include "unistd.h"
int	ft_ex03(int argc, char *argv[])
{
	int	num;

	num = 0;
	if (argc == 3)
	{
		if (!argv[1] || !argv[2])
		{
			write(1, "args is null\n", 12);
			return (-1);
		}
		else
		{
			num = ft_atoi(argv[1]);
			printf("%d\n", num);
			ft_putstr(argv[2]);
		}
	}
	else
	{
		write(1, "error with arguments\n", 21);
		return (-1);
	}
	return (0);
}

long	ft_atoi(char *str)
{
	int	i;
	long	num;

	i = 0;
	num = 0;
	while (i < ft_length(str) && ft_isnum(str[i]))
	{
		if (str[i] == '-')
		{
			write(1, "-", 1);
			i++;
			continue ;
		}
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num);

}

int	ft_length(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i])
		i++;
	return (i);
}

int	ft_isnum(char c)
{
	if (('0' <= c || c <= '9') || c == '-')
		return (1);
	else
		return (0);
}

int	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
	return (0);
}

