#include "libftprintf.h"

int ft_put_unsnbr(unsigned int nb)
{
	int len;

	len = 1;
	if (nb >= 10)
		len += ft_put_unsnbr(nb / 10);
	nb = (nb % 10) + '0';
	write (1, &nb, 1);
	return (len);
}

int main (void)
{
	int i;

	i = printf("%x",-100);
	printf("\nwe printd, %d bytes", 10);
}
