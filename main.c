#include "ft_printf.h"
#include <stdio.h>
// #define UINT_MAX 2147483647

int main(void)
{

	char *a = "ola bom dia ";

	printf("''''%d''''\n",      printf(a, "a todos", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));
	ft_printf("\n");
	ft_printf("''''%d''''\n",ft_printf(a, "a todos", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));

	close(1);
	// fclose(stdout);
	fprintf(stderr, "PRINTF: %d\n", printf("teste123\n"));
	fprintf(stderr, "FT_PRINTF: %d\n", ft_printf("teste123\n"));
}
