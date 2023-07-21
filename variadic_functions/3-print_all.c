#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - function that prints anything
 * @format: list of types of argument
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, format);
	while (format == NULL)
	{
		putchar("\n");
		return;
	}

