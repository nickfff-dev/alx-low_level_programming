#include "main.h"
#include <stdlib.h>

/**
* str_concat - concats two strings
* @s1: the first string
* @s2: the second string
* Return: the pointeror NULL
*/
char *str_concat(char *s1, char *s2)
{
	int reslen;
	char *res;
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int count = 0;

	while (s1 && s1[len1])
	len1++;
	while (s2 && s2[len2])
	len2++;
	reslen = len1 + len2;
	if (reslen == 0)
	{
		return (NULL);
	}
	res = (char *)malloc((reslen + 1) * sizeof(char));
	if (res == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		*(res + i) = s1[i];
		i++;
	}
	while (count < len2)
	{
		*(res + i + count) = s2[count];
		count++;
	}
	res[reslen] = '\0';
	return (res);
}
