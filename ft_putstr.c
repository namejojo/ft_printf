#include "libftprintf.h"

int ft_putstr(va_list args, int len)
{
	char *str;

	str = ((va_arg(args, char*)));
	if(str == NULL)
	{
		write(1, "(null)",6);
		return(len + 6);
	}
	while(*str)
	{
		len = len + ft_putchar(*str);
		str++;
	}
	return(len);
}
