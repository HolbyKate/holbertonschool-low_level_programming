#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *  main - printf if last digit is 0, > 5 o is less than 6 and not 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_digit;

	last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (last_digit > 5)
	{/* if condition is true then print the following */
		printf("last digit of %d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{/* if condition is true then print the following */
		printf("last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{/* if condition is true then print the following */
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
