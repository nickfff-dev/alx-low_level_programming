#include "main.h"

/**
  * create_file - the function name
  * @filename: parameter of type const char *.
  * @text_content: parameter of type char *.
  * Return: int .
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, w;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{ 
		;
	}
	w = write(fd, text_content, i);
	if (w == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
