#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - return the sum of a and b
 * @a: first integer
 * @b: seond integer
 *
 * Return: the result of sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the sustraction of a and b
 * @a: first integer
 * @b: seond integer
 *
 * Return: the result of sum
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the mul of a and b
 * @a: first integer
 * @b: seond integer
 *
 * Return: the result of sum
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the div of a and b
 * @a: first integer
 * @b: seond integer
 *
 * Return: the result of sum
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - return the mod of a and b
 * @a: first integer
 * @b: seond integer
 *
 * Return: the result of sum
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
