#include "libftprintf.h"

int ft_printf(const char *str, ...)
{
	va_list args;
	char *output;
	int len;

	len = 0;
	va_start(args, str);
	output = (char*)str;
	while(*output != '\0')
	{
		if(*output == '%' && *(output + 1) == '\0')
		{
			write(1, "\0", 1);
			output++;
		}
		else if(*output != '%')
			len = len + ft_putchar(*output);
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