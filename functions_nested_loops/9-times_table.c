#include "main.h"

/**
 * times_table - prints 9 times table starting with 0
 * Return: Always success
 */
void times_table(void)

	int h;
	int L;
	int es;

	for (h = 0; L <= 9; h++)
	{
		_putchar('0');

		for (L = 1; L < 10; L++)
		{
			_putchar(44);
			_putchar(32);

			if (es / 10 == 0)
				_putchar(32);

			else
				_putchar(es / 10 + '0');
			_putchar(es %  10 + '0');
			_putchar('\n');
		}
	}
}
