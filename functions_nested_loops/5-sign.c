#include "main.h"

/**
 * main - print sign
 *
 * Return: 1 if >0, 0 if =0 and -1 if <0
 */

int print_sign(int n)
{


	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n = 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putcar ('-');
		return (-1);
	}
	return (0);
}

