#include "stdio.h"
#include "stdlib.h"
int	i = 10;
char	**ft_mass(void)
{
	char **namelist;

	//namelist = (char **) malloc(20 * 3);
	namelist[0] = "Stepan";
	namelist[1] = "Nickolay";
	namelist[2] = "\0";	
	return (namelist);
}
int	main(int argc, char *argv[])
{
	int i = 10;
	argv = ft_mass();
	while (*argv)
	{
		printf("%p", (*argv));
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
