#include "libftprintf.h"

void ft_putstr(va_list args)
{
	char *str;

	str = ((va_arg(args, char*)));
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}
