#include "main.h"

/**
 * _isalpha - check in alphabet
 * @c: Returns 1 if c is a letter, lowercase or uppercase
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
