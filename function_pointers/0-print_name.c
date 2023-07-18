#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that print a name
 * @name: the name to print
 * @f: pointer to char
 *
 * Return : void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
