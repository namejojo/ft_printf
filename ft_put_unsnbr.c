#include "libftprintf.h"

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

int ft_put_unsnbr(va_list args, int len)
{
	unsigned int nb;
	long int i;
	long int a;
	long int b;
	char ch;

	nb = va_arg(args, int);
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