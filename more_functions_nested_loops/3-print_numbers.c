#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 * @n: 0 to 9
 * Return: Always success
 */
void print_numbers(void)
{
	int n;

	for (n = '0' ; n <= '9'; n++)
	{
		_putchar(n);
	}
		_putchar('\n');

}