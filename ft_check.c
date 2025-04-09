/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:47:14 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/09 16:12:59 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list args)
{
	int	len;

	len = -1;
	if (c == 'c')
		len = ft_putchar(va_arg(args, int));
	else if (c == 's')
		len = ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		len = ft_putptr(va_arg(args, unsigned long int), "0123456789abcdef");
	else if (c == 'd')
		len = ft_putnbr(va_arg(args, int));
	else if (c == 'i')
		len = ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		len = ft_put_unsnbr(va_arg(args, unsigned int));
	else if (c == 'X')
		len = ft_putn_base(va_arg(args, unsigned int), "0123456789ABCDEF");
	else if (c == 'x')
		len = ft_putn_base(va_arg(args, unsigned int), "0123456789abcdef");
	else if (c == '%')
		len = write(1, "%%", 1);
	return (len);
}
