#include "study.h"
#include "stdio.h"
#include "unistd.h"
void p_field(void)
{
	int	i;

	i = -15090;
	printf("10 %10d\n", i);
	printf("-10 %-10d\n", i);
	printf("010 %010d\n", i);
	printf("+10 %+10d\n", i);
	printf(" 10 % 10d\n", i);
	printf("10.3 %10.3d\n", i);
	printf("10 %10d\n", i);
}
int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		write(1, &(str[i]), 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_field(void)
{
	t_s s;
	s.number = 10;
	printf("enter justify\n");
	scanf("%d", &(s.minus));
	printf("enter filler\n");
	scanf("%s", &(s.filler));
	ft_handling_justif(s);
	

}

void	ft_handling_justif(t_s s)
{
	char	*str;

	str = "proba";
	if (s.minus == 1)
		ft_left_justif(s, str);
	else
		ft_right_justif(s, str);
}

void	ft_right_justif(t_s s, char *str)
{
	char	str1[s.number + 1];
	int	i;

	i = 0;
	while (i < s.number)
	{
		while (i < s.number - ft_length(str))
		{
			str1[i] = s.filler;
			i++;
		}

		str1[i] = *str;
		i++;
		str++;
	}
	str1[i] = '\0';
	ft_putstr(str1);

}

void	ft_left_justif(t_s s, char *str)
{
	char	str1[s.number + 1];
	int	i;

	i = 0;
	while (i < s.number)
	{
		while (*str)
		{
			str1[i] = *str;
			i++;
			str++;
		}
		str1[i] = s.filler;
		i++;
	}
	str1[i] = '\0';
	ft_putstr(str1);
}
