#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_array - Prints an array of integers
* @array: The array to be printed
* @start: Index to start printing from
* @end: Index to stop printing
*/

void print_array(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%d", array[i]);
		if (i < end - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search -  function that uses the binary search algo
 * @array: pointer to beginning of the list
 * @size: number of elements in the array
 * @value: the target key to find in the list
 * Return: the index if found or -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	int end = size - 1;
	int start = 0;
	int mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (start <= end)
	{
		print_array(array, start, end + 1);
		mid = (start + end) / 2;
		if (array[mid] < value)
		{
			start = mid + 1;
		}
		else if (array[mid] > value)
		{
			end = mid - 1;
		}

		else
		{
			return (mid);
		}
	}

	return (-1);
}
