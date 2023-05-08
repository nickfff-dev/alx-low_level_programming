#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - The entry point of the program
  * @argc: parameter of type int .
  * @argv: parameter of type char *.
  * Return: int .
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fd_from = open(argv[1], O_RDONLY);
	r = read(fd_from, buffer, 1024);
	if (r == -1 || fd_from == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w = write(fd_to, buffer, r);
	if (w == -1 || fd_to == -1)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close_file(fd_from);
	close_file(fd_to);
	free(buffer);
	return (0);
}
