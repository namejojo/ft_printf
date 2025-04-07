#include "libftprintf.h"
#include <stdio.h>

int main(void)
{
	int i;

	i = ft_putn_base(15,"0123456789ABCDEF");
	printf("\nwe printd, %d bytes\n", i);
}
