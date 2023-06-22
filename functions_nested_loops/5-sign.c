#include "main.h"

/**
 * print_sign- print sign
 * @n:Prototype: int print_sign(int n);
 * Return: 1 if >0, 0 if =0 and -1 if <0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar (0);
		return (0);
	}
}

