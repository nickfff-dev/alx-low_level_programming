#include "main.h"
#include <stdio.h>
/**
 *_strpbrk - first occurence of  a string
 * @s: string to check
 * @accept: string to find
 * Return: pointer or null
 */
char * _strpbrk(char *s, char *acciept)
{
	int f, g;

	for (f = 0; *s != '\0'; f++)
	{
		for (g = 0; accept[g] != '\0'; g++)
		{
			if (*s == accept[g])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
