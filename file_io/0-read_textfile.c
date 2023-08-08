#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - fucntion that reads a text and prints it to the POSIX
 * standard output
 * @filename: the file
 * @: the letters
 *
 * Return: if the file can not be opened or read, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char*)letter);
	if (buffer == NULL)
		return (0);

