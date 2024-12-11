#include "libftprintf.h"

int ft_printf(const char *str, ...)
{
	va_list args;
	char *output;
	int len;

	len = 0;	
	output = (char*)str;
	va_start(args, str);
	while(*output)
	{
		if(*output != '%')
		{
			len = len + ft_putchar(*output);
		}
		else
		{
			len = ft_check(output + 1, args, len);
			output++;
		}
		output++;
	}
	va_end(args);
	return(len);
}