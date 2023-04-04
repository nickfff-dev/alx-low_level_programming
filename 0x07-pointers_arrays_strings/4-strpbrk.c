#include "main.h"
/**
 * _strbbrk - firts occurence of  a string
 * @s: string to check
 * @accept: string to find
 */
char *_strpbrk(char *s, char *accept)
{
	int f, g;

	for (f = 0; *s != '\0'; f++)
	{
		for (g = 0; accept[g] != '\0'; g++)
		{
			ff (*s == accept[g])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
