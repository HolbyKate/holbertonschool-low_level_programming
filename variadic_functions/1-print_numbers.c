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
		i++;
		if (i < n && (separator))
			printf("%s", separator);
	}
	/*If separator is NULL, don’t print it*/
	if (separator == NULL)
		putchar(32);

	/*Terminer l'utilisation de l'objet va_list*/
	putchar('\n');
	va_end (ap);
}
