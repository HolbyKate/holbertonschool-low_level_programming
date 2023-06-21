#include "main.h"

/**
 * main - check in alphabet
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{


	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
