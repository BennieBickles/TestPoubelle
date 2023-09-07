#include <unistd.h>

void	ft_print_numbers(void)
{
	write(1, "0123456789\n", 10);
}

//Attention, c'est numbers (avec un s) pas number
