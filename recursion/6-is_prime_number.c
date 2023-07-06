#include "main.h"
#include <stdio.h>

/**
 * verif_prime - return 1 if the imput interger is a prime number
 * @n: type number
 * @i: type number
 * Return: always success
 */
int verif_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
			if ((n / i) < i)
				return (1);
					return (verif_prime(n, i + 1));
}
int verif_prime(int n, int i);

/**
 * is_prime_number - Return a number
 * @n: the number type
 *
 * Return: always success
 */
int is_prime_number(int n)
{
	return (verif_prime(n, 1));
}
