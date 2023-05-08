#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - the function name
  * @filename: parameter of type const char *.
  * @letters: parameter of type size_t .
  * Return: int .
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t r, w;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	r = read(fd, buffer, letters);
	if (r == -1)
	{
		{
		}
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		{
		}
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (w);
}
