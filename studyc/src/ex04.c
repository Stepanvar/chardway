#include "ex.h"
#include "stdio.h"
#include "time.h"
#include "stdlib.h"
#include "limits.h"

static void	ft_print_rank(double percent)
{
	if (percent <= 0.000001)
		printf("%e!\nYour rank is Apprentice\n", percent);
	else if (0.000001 < percent && percent <= 0.00001)
		printf("%e!\nYour rank is Initiate\n", percent);
	else if (0.00001 < percent && percent <= 0.0001)
		printf("%e!\nYour rank is Disciple\n", percent);
	else if (0.0001 < percent && percent <= 0.001)
		printf("%e!\nYour rank is Master\n", percent);
	else if (0.001 < percent && percent <= 0.01)
		printf("%e!\nYour rank is Grand Master\n", percent);
	else if (0.01 < percent && percent <= 0.1)
		printf("%e!\nYour rank is Archmage\n", percent);
	else if (percent > 0.1)
		printf("%e!\nYour rank is God\n", percent);
}

static double	ft_amount_by_mugl(long pop, float per_mugl)
{
	int	prod_one_mugl;
	double	amount_by_mugl;

	prod_one_mugl = 500;
	amount_by_mugl = pop * per_mugl * prod_one_mugl;
	return (amount_by_mugl);	
}

static double	ft_amount_by_mag(long pop, float per_mugl)
{
	int	prod_one_mag;
	double	amount_by_mag;

	prod_one_mag = 1000;
	amount_by_mag = pop * (1 - per_mugl) * prod_one_mag;
	return (amount_by_mag);
}

static double	def_amount(void)
{
	double	mana_amount;
	long	population;
	float	percent_mugl;

	percent_mugl = 0.79650f;
	population = 8184437460;
	mana_amount = ft_amount_by_mag(population, percent_mugl) + ft_amount_by_mugl(population, percent_mugl);
	return (mana_amount);
}

static void	ft_play_with_types(void)
{
	int	i;
	long	lng;
	float	flt;

	i = 1;
	lng = 1;
	flt =(float) 8 / 3;
	lng = i * 10 * lng;
	printf("%d\n", i);
	i++;
	printf("%ld\n", lng);
	printf("%f\n", flt);
}

int	ft_types(char *str)
{
	srand(time(0));
	double	magic_amount;
	long	person_used;
	double	percent;

	magic_amount = def_amount();
	if (!*str)
		return (-1);
	person_used = ft_atoi(str);
	percent = (person_used / magic_amount) * 100;
	ft_print_rank(percent);
	ft_play_with_types();
	return (0);
}

