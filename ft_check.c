#include "libftprintf.h"

int ft_check(char* str, va_list args, int len)
{
	if(*str && *str == 'c')
		len = len + ft_putchar(va_arg(args, int));
	else if(*str && *str == 's')
		len = ft_putstr(args, len);
	else if(*str && *str == 'p')
		len = ft_putptr(args, len);
	else if(*str && *str == 'd')
		len = ft_putnbr(args, len);
	else if(*str && *str == 'i')
		len = ft_putnbr(args, len);
	else if(*str && *str == 'u')
		len = ft_put_unsnbr(args, len);
	else if(*str && *str == 'X')
		len = ft_putnbr_baseUP(args, len);
	else if(*str && *str == 'x')
		len = ft_putnbr_baseDOWN(args, len);
	else if(*str && *str == '%')
		len = len + write(1,"%%", 1);
	return(len);
}