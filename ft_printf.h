/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 11:55:37 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/09 16:12:58 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_check(char c, va_list args);
int	ft_putchar(char c);
int	ft_putnbr(int nb);
int	ft_putstr(char *str);
int	ft_put_unsnbr(unsigned int nb);
int	ft_itoa_base(int nbr, char *base);
int	ft_printf(const char *str, ...);
int	ft_putptr(unsigned long int nbr, char *base);
int	ft_putn_base(unsigned int nbr, char *base);

#endif