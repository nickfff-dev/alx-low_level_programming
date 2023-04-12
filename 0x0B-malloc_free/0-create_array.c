#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array returning pointer
 * @size: the size of the array of chars
 * @c: the character to initialize with
 * Return: NULL or pointer
 */

char *create_array(unsigned int size, char c)
{
	char *y;
	unsigned int x = 0;

	if (size == 0)
	{
		return (NULL);
	}
	y = malloc(sizeof(*y) * size);
	if (y == NULL)
	{
		return (NULL);
	}
	while (x < size)
	{
		*(y + x) = c;
		x++;
	}
	*(y + x) = '\0';
	return (y);
}
