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

void ft_putnbr(va_list args)
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
		write(1, &ch, 1);
		b--;
	}
}
