#include <stdlib.h>
#include "main.h"

/**
* _realloc - function that reallocates a memory block
* @ptr: pointer to the initial memory block
* @old_size: size of the initial memory block
* @new_size: size of the new memory block
* Return: a pointer to the new memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *foo;
	char *prev_foo;
	unsigned int j;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	foo = malloc(new_size);
	if (!foo)
	{
		return (NULL);
	}
	prev_foo = ptr;
	if (new_size < old_size)
	{
		for (j = 0; j < new_size; j++)
		{
			foo[j] = prev_foo[j];
		}
	}
	if (new_size > old_size)
	{
		for (j = 0; j < old_size; j++)
		{
			foo[j] = prev_foo[j];
		}
	}
	free(ptr);
	return (foo);
}
