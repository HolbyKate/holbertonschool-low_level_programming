#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: return & if c uppercase*
 * Return: Always success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
