#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string follow by a new line
 * @seperator: the string to be printed between strings
 * @n: number of strings passed to be function
 * @...: list
 *
 * Return void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list ap;
	unsigned int i = 0;
	char *string;

	if (n > 0)
	{
		va_start(ap, n);

		while (i < n)
		{
			string = va_arg(ap, char*);
			if (string == NULL)
				printf("(nil)");
			else
				printf("%s", string);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}

		va_end(ap);
	}
	printf("\n");
}


