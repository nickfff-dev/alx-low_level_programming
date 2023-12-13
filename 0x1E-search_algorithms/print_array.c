#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_array - Prints an array of integers
*
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
