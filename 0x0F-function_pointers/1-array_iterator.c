#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - function that executes a function given as a parameter
* @array: the array to call the function on
* @size: the size of the array to call the function on
* @action: the function to call on the array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (!array || !action)
	{
		return;
	}
	for (x = 0; x < size; x++)
	action(array[x]);
}
