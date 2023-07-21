#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - fonction that prints numbers
 * @separator: the string to be printed between numbers
 * @n: numbers of integers passed to the function
 * @...: list
 *
 * Return void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	/* Parcourir les arguments en utilisant une boucle while*/
	va_start(ap, n);
	while (i < n)
	{
		/* Utiliser la macro va_arg pour récupérer chaque argument*/
		printf("%d", va_arg(ap, int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	/*Terminer l'utilisation de l'objet va_list*/
	printf("\n");
	va_end(ap);
}
