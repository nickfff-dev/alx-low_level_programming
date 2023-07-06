#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: The character to write to stdout
 * Return: on success 1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
