#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *  main - printf if last digit is 0, >  5 o is less than 6 and not 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (last digit > 5)
	{/* if condition is true then print the following */
		printf("%10 and is greater than 5\n", n);
	}
	else if (last digit == 0)
	{/* if condition is true then print the following */
		printf("%10 and is 0\n", n);
	}
	else if (last digit < 0 > 6)
	{/* if condition is true then print the following */
		printf("%10 and is less than 6 and not 0\n", n);
	}
	return (0);
}
