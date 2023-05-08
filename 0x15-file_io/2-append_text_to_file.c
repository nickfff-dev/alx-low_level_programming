#include "main.h"

/**
  * append_text_to_file - the function name
  * @filename: parameter of type const char *.
  * @text_content: parameter of type char *.
  * Return: int .
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		while (text_content[len])
		len++;
		wr = write(fd, text_content, len);
		if (wr == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
