#include "main.h"

/**
 * print_alphabet_10 - prints 10 times the alphabet
 */

void print_alphabet_x10(void)
{

	char alphabet;
	int compteur = 0;

	while (compteur < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++);
		compteur++;
	}

	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
