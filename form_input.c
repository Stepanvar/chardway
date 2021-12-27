#include "stdio.h"
typedef struct s_s{
	char	name[10];
	int	w;
	int	h;
	float	imt;
}t_s;

t_s	ft_calc_imt(t_s s)
{
	s.imt = ((float)s.w * 10000)/ (s.h * s.h);
	return (s);
}

void	ft_print_eval(t_s s)
{
	if (20 <= s.imt && s.imt <= 30)
		printf("Good job!\n");
	else
		printf("Try harder! You can do it!\n");
}
int	main()
{
	t_s s;
	printf("Enter your name\n");
	scanf("%s", s.name);
	printf("Enter your weight\n");
	scanf("%d", &(s.w));
	printf("Enter your height\n");
	scanf("%d", &(s.h));
	s = ft_calc_imt(s);
	printf("Hello, %s!\nYour IMB is %f\n", s.name, s.imt);
	ft_print_eval(s);
	printf("");
	return (0);
}
