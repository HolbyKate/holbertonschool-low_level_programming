#include <calc.h>

/**
 * op_add - return the sum of a and b
 * @a: first integer
 * @b: seond integer
 *
 * Return: the result of sum
 */

int op_add(int a, int b)

{
	return (a +b);
}

int op_sub(int a, int b)
{
	return (a - b);
}

int op_mul(int a, int b)
{
	return (a *b);
}

int op_div(int a, int b)
{
	if (b == 0)
	{printf(Error \n);
		exit (100);
	}
	return (a / b);
}

int op_mod(int a, int b)
{
	if (b == 0)
	{print(Error \n);
		exit (100);
	}
	return (a % b);
}


