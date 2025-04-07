/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putn_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-so <jlima-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 08:39:55 by jlima-so          #+#    #+#             */
/*   Updated: 2025/04/07 09:17:15 by jlima-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_strlen(char *str)
{
	long int	ind;

	ind = 0;
	while (str[ind])
		ind++;
	return (ind);
}

int	ft_putn_base(int nbr, char *base)
{
	int	base_len;
	int	len;

	base_len = ft_strlen(base);
	len = 1;
	if (nbr >= base_len)
		len += ft_putn_base(nbr / base_len, base);
	nbr = nbr % base_len;
	write (1, &base[nbr], 1);
	return (len);
}
