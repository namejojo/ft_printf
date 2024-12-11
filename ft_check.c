#include "libftprintf.h"

void ft_check(char* str, va_list args)
{
	if(*str && *str == 'c')
		ft_putchar(args);
	else if(*str && *str == 's')
		ft_putstr(args);
	else if(*str && *str == 'p')
		ft_putptr(args);
	else if(*str && *str == 'd')
		ft_putnbr(args);
	else if(*str && *str == 'i')
		ft_putnbr(args);
	else if(*str && *str == 'u')
		ft_put_unsnbr(args);
	else if(*str && *str == 'X')
		ft_putnbr_baseUP(args);
	else if(*str && *str == 'x')
		ft_putnbr_baseDOWN(args);
	else if(*str && *str == '%')
		write(1,"%%", 1);
}