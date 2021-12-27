#include "unistd.h"
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char *argv[])
{
	char	c;

	c = argc + 65;
	write(1, "Hello world!\n", 10);
	ft_putchar(c);
	if (argc >= 2)
		ft_putchar(argv[1][0]);
	return (0);
}
