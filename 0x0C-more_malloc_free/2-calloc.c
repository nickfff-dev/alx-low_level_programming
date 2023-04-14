#include <stdlib.h>
#include "main.h"

/**
* _memset - function that fills memory with a constant byte
* @s: the memory area to be filled
* @b: the variable to fill the memory area with
* @n: the number of bytes to be filled
* Return: a pointer to the memory area filled with b
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
/**
*_calloc - uses malloc to allocate memory for an array
* @nmemb: number of elements
* @size:  size of each element
* Return: the allocated memory or NULL if it fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *foo;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	foo = malloc(size * nmemb);
	if (foo == NULL)
	{
		return (NULL);
	}
	_memset(foo, 0, nmemb * size);
	return (foo);
}
