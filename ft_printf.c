#include "libftprintf.h"

int ft_printf(const char *str, ...)
{
	va_list args;
	char *output;
	
	output = (char*)str;
	va_start(args, str);
	while(*output)
	{
		if(*output != '%')
			write(1, output, 1);
		else
		{
			ft_check(output + 1, args);
			output++;
		}
		output++;
	}
	va_end(args);
}