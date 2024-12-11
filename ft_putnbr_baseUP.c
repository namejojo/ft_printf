#include "libftprintf.h"

static unsigned int ft_strlen(char *s)
{
	int ind;
	
	ind = 0;
	while(s[ind])
		ind++;
	return(ind);
}

static long int comp(char *base, long int size)
{
	long int upper;
	long int lower;

	if(ft_strlen(base) < 2)
		return(0);
	lower = 0;
	while(base[lower] != '\0')
	{
		if(base[lower] == '+' || base[lower] == '-')
			return(0);
		lower++;
	}
	lower = 0;
	while(lower != size - 1)
	{
		upper = lower + 1;
		while(base[upper] != '\0')
		{
			if(base[upper] == base[lower])
				return (0);
			else if(base[upper] != base[lower])
				upper++;
		}
		lower++;
	}
	return(1);
}

int ft_putnbr_baseUP(va_list args, int len)
{
	char str[50];
	long int ind;
	long int bas;
	unsigned int nbr;
	char *base;
	
	base = "0123456789ABCDEF";
	nbr = va_arg(args, int);
	if(nbr == 0)
	{
		write(1,"0",1);
		return(len + 1);
	}
	bas = ft_strlen(base);
	ind = 0;
	if(comp(base, ft_strlen(base)) == 1)
	{
		while(nbr != 0)
		{	
			str[ind++] = base[nbr % bas];
			nbr = nbr / bas;
		}
		str[ind] = '\0';
		while (ind >= 0)
		{
			len = len + ft_putchar(str[ind--]);
		}
	}
	return(len);
}
