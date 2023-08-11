#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: a NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_write;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return ( 1);
	}

	while (*(text_content + i) != '\0')
		i++;
	bytes_write = write(fd, text_content, i);
	if (bytes_write == -1)
		return (-1);
	close(fd);
	return (1);
}
