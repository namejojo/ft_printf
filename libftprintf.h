#ifndef __LIBFR_PRINTF__
#define __LIBFR_PRINTF__
#include <stdarg.h>
#include <unistd.h>

void ft_check(char* str, va_list args);
void ft_putnbr_baseUP(va_list args);
void ft_putchar(va_list args);
void ft_putnbr(va_list args);
void ft_putstr(va_list args);
void ft_put_unsnbr(va_list args);
void ft_putnbr_baseDOWN(va_list args);
void ft_putptr(va_list args);
int ft_printf(const char *str, ...);

#endif