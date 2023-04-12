#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns pointer to new array
 * @str: the string to copy
 * Return: pointer or null
 */

char *_strdup(char *str)
{
	char *y;
	int num;

	if (str == NULL)
	{
		return (NULL);
	}
	num = 0;
	while (str[num])
	{
		num++;
	}
	y = (char *)malloc((num + 1) * sizeof(char));

	if (y == NULL)
	{
		return (NULL);
	}

	while (num--)
	{
		*(y + num) = str[num];
	}
	return (y);
}
