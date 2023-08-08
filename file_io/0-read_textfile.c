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
	ssize_t fd;
	ssize_t bytes_read;
	ssize_t bytes_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
		return (0);

	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_write == -1)
		return (0);

	free(buffer);
	close(fd);
	return (bytes_write);
}

