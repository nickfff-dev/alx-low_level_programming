#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - function that conducts a linear search
 * @array: pointer to the first element in an array
 * @size: number of elements in the array
 * @value: key to find in the array
 * Return: -1 if no item is found
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;
	size_t index = 0;

	if (array == NULL || !value)
	{
		return (-1);
	}

	while (index < size)
	{
		printf("Value checked array[%d] = %d\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
		index++;
	}
	return (-1);
}
