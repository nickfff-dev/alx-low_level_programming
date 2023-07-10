#include "main.h"

/**
  * append_text_to_file - the function name
  * @filename: parameter of type const char *.
  * @text_content: parameter of type char *.
  * Return: int .
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
		{
			len++;
		}
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (write(fd, text_content, len) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
