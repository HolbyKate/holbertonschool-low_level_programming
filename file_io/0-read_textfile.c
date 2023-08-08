#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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
	ssize_t bytes_read, bytes_write;
	char *buffer;

	if (filename == NULL)
		return (0);
	/*open the file*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/*size malloc, number of letters*/
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	/*read the expected amount of bytes*/
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/*write the expected amount of bytes*/
	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	/*if write fails or does not write the expected amount of bytes, return 0*/
	if (bytes_write == -1 || != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return bytes_write;
}
