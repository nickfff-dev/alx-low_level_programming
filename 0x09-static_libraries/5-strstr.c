#include "main.h"
#include <stdio.h>

/**
 * *_strstr - find the first occurr.. of a substring
 * @haystack: the string to searcn inside
 * @needle: the substring to search for
 * Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int w, z;

	for (w = 0; haystack[w] != '\0'; w++)
	{
		for (z = 0; needle[z] != '\0'; z++)
		{
			if (haystack[w + z] != needle[z])
				break;
		}
		if (!needle[z])
			return (&haystack[w]);
	}
	return (NULL);
}
