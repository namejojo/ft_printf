#include "libftprintf.h"

void ft_putchar(va_list args)
{
	char c;

	c = va_arg(args, int);
	write( 1, &c, 1);
}