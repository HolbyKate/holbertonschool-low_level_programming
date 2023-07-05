#include "main.h"
#include <stdio.h>

/**
 * _perfect - return the natural square root of a number
 * @result: le résultat souhaité
 * @a: le carré
 *
 * Return: always success
 */

int _perfect(int result, int a)
{
	if (a * a == result)
		return (a);
	else if (a * a > result)
		return (-1);
	else
		return (_perfect(result, a + 1));
}
/**
 * _sqrt_recursion - return the natural square root
 * @n: type int
 *
 * Return: always success
 */
int _sqrt_recursion(int n)
{
	return (_perfect(n, 1));
}

