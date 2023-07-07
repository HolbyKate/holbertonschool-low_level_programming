#include "main.h"
#include <stdio.h>

/**
 * main - prints number of argument
 * @argc: number of argument
 * @argv: print argument
 *
 * Return: void
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
