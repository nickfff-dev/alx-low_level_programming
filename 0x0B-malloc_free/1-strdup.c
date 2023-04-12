#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns pointer to new array
* @str: the string to copy
* Return: pointer or null
*/
char *_strdup(char *str)
{
	int reslen;
	char *res;
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int count = 0;

	while (s1[len1])
	len1++;
	while (s2[len2])
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
	return(res);
}
