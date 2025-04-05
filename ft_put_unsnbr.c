/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 12:02:11 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/05 12:02:11 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_put_unsnbr(unsigned int nb)
{
	int	len;

	len = 1;
	if (nb >= 10)
		len += ft_putnbr(nb / 10);
	nb = (nb % 10) + '0';
	write (1, &nb, 1);
	return (len);
}
