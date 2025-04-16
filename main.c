#include "ft_printf.h"
#include <stdio.h>
// #define UINT_MAX 2147483647

int main(void)
{

	char *a = "ola bom dia %K%s %p %% %i %i %X %u\0";
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
	printf("a''''%d''''\n",      printf(a, "a todos", NULL, NULL, 2147483647, -2147483648, -32, -12334567, -1, "ola bom dia a todos"));
	ft_printf("\n");
	ft_printf("a''''%d''''\n",ft_printf(a, "a todos", NULL, NULL, 2147483647, -2147483648, -32, -12334567, -1, "ola bom dia a todos"));

	//    printf("''''%d''''\n",    printf(v));
	// ft_printf("''''%d''''\n", ft_printf(v));
}
// clear && make && ccf main.c libftprintf.a && ./a.out
// 
// 
// 
// 0. 
// .-
// 
// 
// 
// /*  int	main(void)
// {
//  	ft_printf("%d \n", ft_printf("ola%%%"));
//  	printf("%d \n", printf("ola%%%"));
	
//  	int teste = printf("hello world\n");
//  	printf("imprimiu: %d\n", teste);
//  	int teste2 = ft_printf("hello world\n");
//  	ft_printf("imprimiu: %d\n", teste2);
//  	printf("\n");
//  	int x = 42;
//  	int x2 = 34;
//  	void *ptrx2 = &x2;
//  	void *ptr = &x;

	
// 	ft_printf("HELLO\n");
// 	ft_printf("%d \n", ft_printf(""));
// 	 ft_printf("%d \n", ft_printf("CHARACTERS: %c %c\n", 'a', 'b'));
// 	 ft_printf("STRINGS: %s %s\n", "Good", "bye");
// 	 ft_printf("DECIMAL: %i %d\n", 42, 123);
// 	 ft_printf ("DECIMALS: %d %d\n", 1977, 650000L);
// 	 ft_printf("POINTER NULO: %p \n", NULL );
// 	 ft_printf("POINTER DE x é: %p\n", ptr);
// 	 ft_printf("POINTER 0: %p %p \n", (void *)0, (void *)0);
// 	 ft_printf ("DECIMAL e HEXADECIMAL: %d %x %X \n", 255, 255, 255);
// 	 ft_printf ("HEXADECIMAL 0: %x %X\n", 0, 0);
// 	 ft_printf ("Unsigned int: %u %u\n",  2147483647, UINT_MAX);
// 	 ft_printf ("Unsigned int: %u \n", UINT_MAX);
// 	 ft_printf ("Mix: %c, %s, %p, %d, %i, %x, %X, %u, %%, all mixed\n", 'A',
// 	 	"Mix", ptrx2, 34, 34, 255, 255, UINT_MAX);


//  ft_printf("\n");
	
// 	printf("Hello\n");
// 	printf("%d \n", printf(""));
// 	printf("%d \n", printf("Characters: %c %c\n", 'a', 'b'));
// 	printf("Strings: %s %s\n", "Good", "bye");
// 	printf("Decimal: %d %d\n", 42, 123);
// 	printf ("Decimals: %d %ld\n", 1977, 650000L);
// 	printf("Pointer nulo: %p \n", NULL );
// 	printf("Pointer de x é: %p\n", ptr);
// 	printf("Pointer 0: %p %p \n", (void *)0, (void *)0);
// 	printf ("Decimal e hexadecimal: %d %x %X \n", 255, 255, 255);
// 	printf (" Hexadecimal 0: %x %X\n", 0, 0);
// 	printf ("Unsigned int: %u %u\n", 2147483647, UINT_MAX);
// 	printf ("Unsigned int: %u \n", UINT_MAX);
// 	printf ("Mix: %c, %s, %p, %d, %i, %x, %X, %u, %%, all mixed\n", 'A', "Mix",
// 		ptrx2, 34, 34, 255, 255, UINT_MAX);
// 	return (0);
// } */
