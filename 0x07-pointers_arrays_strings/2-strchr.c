#include  "main.h"
#include <stdio.h>
/**
 * _strchr - check for char in string
 * @s: the string to search
 * @c: the char to find
 * Return: a pointer to the char found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (1)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		if (*(s + i) == 0)
		{
			return (NULL);
		}
		i++;
	}
}
