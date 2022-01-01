#include "helloheader.h"
#include "unistd.h"
void	print_hello(void)
{
	write(1, "Hello world\n", 12);
}
