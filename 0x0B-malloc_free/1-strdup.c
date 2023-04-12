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
	num = sizeof(str);
	y = (char *)malloc(num * sizeof(char));

	while (num--)
	{
		*(y + num) = str[num];
	}
	return (y);
}
