#include "function_pointers.h"

/**
* int_index - function that searches for an integer
* @array: the array to find the integer in
* @size: the number of elements in the array
* @cmp: the function to use to compare values
* Return: the index of the first element for which the cmp function does not
* return 0, or -1 if no element matches or if size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
			{
				return (j);
			}
		}
	}
	return (-1);
}
