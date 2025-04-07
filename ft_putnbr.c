/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:02:50 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/07 09:00:50 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int nb)
{
	int	len;

	len = 1;
	if (-10 < nb && nb < 0)
		write (1, "-", 1);
	if (nb <= -10 || nb >= 10)
		len += ft_putnbr(nb / 10);
	if (nb < 0)
		nb = -(nb % 10) + '0';
	else
		nb = (nb % 10) + '0';
	write (1, &nb, 1);
	return (len);
}

/*
static int nbm_lenght(long int nb)
{
	int b = 0;
	
	while (nb >=10)
	{
		nb = nb/10;
		b++;
	}
	return b;
}

int ft_putnbr(va_list args, int len)
{
	int nb;
	int i;
	int a;
	int b;
	char ch;
	
	nb = va_arg(args, int);
	if(nb < 0)
	write(1,"-",1);
	if(nb < 0)
	nb = 0 - nb;
	b = nbm_lenght(nb);
	while (b >= 0)
	{
		i = 0;
		a = nb;
		while(i++ != b)
		a = a/10;
		if (a>=10)
		a = a%10;
		ch = a + '0';
		len = len + ft_putchar(ch);
		b--;
	}
	return(len);
}
*/