/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 10:31:48 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/05 12:08:43 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	char	*output;
	int		len;

	va_start (args, str);
	output = (char *)str;
	while (*output != '\0')
	{
		if (*output != '%')
			len = len + ft_putchar(*output);
		else if (*output++ == '%')
			len = ft_check(output, args);
		output++;
	}
	va_end (args);
	return (len);
}
