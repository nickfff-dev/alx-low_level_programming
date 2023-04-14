#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - assigns memory using malloc
* @b: size of memory to allocate
* Return: fails the normal process termination with a status value of 98
*/
void *malloc_checked(unsigned int b)
{
	void *h;

	h = malloc(b);
	if (h == NULL)
	{
		exit(98);
	}
	return (h);
}
