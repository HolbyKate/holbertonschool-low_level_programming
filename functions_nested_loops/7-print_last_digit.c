#include "main.h"

/**
 * main - last digit
 *
 * Return: return 0
 */

int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}

	_putchar ('0' + n);
		return (n);
}

