#include "main.h"

/**
* read_textfile - function reads text file prints to stdin
* @filename: pointer to the file name
* @letters: number of characters to read
* Return: number of chars read and written or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t s, w;
	char *c;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	c = (char *)malloc(sizeof(char) * letters);
	if (c == NULL)
	{
		return (0);
	}
	s = read(fd, c, letters);
	if (s == -1)
	{
		return (0);

	}
	w = write(STDOUT_FILENO, c, s);
	if (w == -1 || w != s)
	{
		return (0);
	}

	free(c);
	close(fd);
	return (s);
}
