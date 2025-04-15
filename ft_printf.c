/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:31:48 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/15 18:00:55 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static const char	*skipspaces(const char *str)
{
	while (*str == ' ' && *str)
		str++;
	return (str);
}

static void	initianlize(t_numb	*n)
{
	n->len = 0;
	n->flag = 0;
}
static int	ft_check(char *c, va_list args, int *flag)
{
	if (*c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (*c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (*c == 'p')
		return (ft_putptr(va_arg(args, unsigned long int), "0123456789abcdef"));
	else if (*c == 'd' || *c == 'i')
	{
		if (*(c - 1) == ' ' && *c == 'i' && *flag == 0)
		{
			*flag = 1;
			return (ft_putchar(' ') + ft_putnbr(va_arg(args, int)));
		}
		return (ft_putnbr(va_arg(args, int)));
	}
	else if (*c == 'u')
		return (ft_put_unsnbr(va_arg(args, unsigned int)));
	else if (*c == 'X')
		return (ft_putn_base(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (*c == 'x')
		return (ft_putn_base(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (*c == '%')
		return (ft_putchar('%'));
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	t_numb	n;

	if (str == NULL)
		return (-1);
	va_start (args, str);
	initianlize (&n);
	while (*str != '\0')
	{
		n.temp = n.len;
		if (*str != '%')
			n.len = n.len + ft_putchar(*str);
		else if (*(str++) == '%')
		{
			str = skipspaces(str);
			n.len = n.len + ft_check((char *)str, args, &n.flag);
		}
		if (n.temp > n.len)
			return (-1);
		str++;
	}
	va_end (args);
	return (n.len);
}
