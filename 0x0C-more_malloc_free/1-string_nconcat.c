#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenates two strings
* @s1: first string to concatenate
* @s2: second string to concatenate
* @n: the number of bytes of s2 to concatenate
* Return: pointer to the resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int y = 0, z = 0, num1 = 0, num2 = 0;

	while (s1 && s1[num1])
	num1++;
	while (s2 && s2[num2])
	num2++;
	if (n < num2)
	{
		x = malloc(sizeof(char) * (num1 + n + 1));
	}
	else
	{
		x = malloc(sizeof(char) * (num1 + num2 + 1));
	}
	if (!x)
	{
		return (NULL);
	}
	while (y < num1)
	{
		x[y] = s1[y];
		y++;
	}
	while (n < num2 && y < (num1 + n))
	x[y++] = s2[z++];
	while (n >= num2 && y < (num1 + num2))
	x[y++] = s2[z++];
	x[y] = '\0';
	return (x);
}
