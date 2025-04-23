#include "ft_printf.h"
#include <stdio.h>
// #define UINT_MAX 2147483647

int main(void)
{

	char *a = "ola bom dia %";
	// char *v = NULL;

	// char *a = "% i";
	// printf("%d", printf(a, 0));

	// isto nao e um teste valido but is is fun   printf("''''%d''''\n",    printf(a, "a todos", NULL, NULL));
	// isto nao e um teste valido but is is funft_printf("''''%d''''\n", ft_printf(a, "a todos", NULL, NULL));
	// ft_printf("\n");

	//    printf("''''%d''''\n",    printf("bom dia a % %s %s%%p", "a todos", NULL, NULL));
	// ft_printf("\n");
	// ft_printf("''''%d''''\n", ft_printf(a, "a todos", NULL, NULL));
	// ft_printf("\n");
	// printf("''''%d''''\n", printf(a, "a todos", NULL, NULL));
	


	// printf("''''%d''''\n", printf("|%X|", 32));
	
	
	// write(1,"\n",1);
// 
	printf("''''%d''''\n",      printf(a, "a todos", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));
	ft_printf("\n");
	ft_printf("''''%d''''\n",ft_printf(a, "a todos", NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL));

	//    printf("''''%d''''\n",    printf(v));
	// ft_printf("''''%d''''\n", ft_printf(v));

	// fclose(stdout);
	// fprintf(stderr, "PRINTF: %d\n", printf("teste123\n"));
	// fprintf(stderr, "FT_PRINTF: %d\n", ft_printf("teste123\n"));
}
