#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file created
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int nbytes_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDONLY, 0_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		close (fd);
	return (1);

