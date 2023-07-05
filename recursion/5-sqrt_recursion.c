#include "main.h"
#include <stdio.h>

/**
 * _perfect - return the natural square root of a number
 * @result: le résultat souhaité
 * @a: le carré
 *
 * Return: always success
 */

int_perfect(int result, int a)
{
	if (a * a == result)
		return (a);
	else if (a * a > result)
		return (-1);
	else
		return (perfect(result, a + 1));
				}
				/**
				 * _sqrt_recursion - return the natural square root of a number
				 * @n: type int
				 *
				 * Return: always success
				 */
				int _sqrt_recursion(int n)
				{
				return (perfect(n, 1));
				}

