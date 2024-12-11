#ifndef __LIBFR_PRINTF__
#define __LIBFR_PRINTF__
#include <stdarg.h>
#include <unistd.h>

#include <stdio.h> //delete


int ft_check(char* str, va_list args, int len);
int ft_putnbr_baseUP(va_list args, int len);
int ft_putchar(char c);
int ft_putnbr(va_list args, int len);
int ft_putstr(va_list args, int len);
int ft_put_unsnbr(va_list args, int len);
int ft_putnbr_baseDOWN(va_list args, int len);
int ft_putptr(va_list args, int len);
int ft_printf(const char *str, ...);

#endif