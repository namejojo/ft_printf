#include "libftprintf.h"

int ft_putstr(va_list args, int len)
{
	char *str;

	str = ((va_arg(args, char*)));
	while(*str)
	{
		len = len + ft_putchar(*str);
		str++;
	}
	return(len);
}
