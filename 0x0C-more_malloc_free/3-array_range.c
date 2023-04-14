#include <stdlib.h>
#include "main.h"

/**
* array_range - function that creates an array of certain range
* @min: the minimum number of the range
* @max: the maximum number of the range
* Return: a pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *potr;
	int l, num;

	if (min > max)
	{
		return (NULL);
	}
	num = max - min + 1;
	potr = malloc(sizeof(int) * num);
	if (potr == NULL)
	{
		return (NULL);
	}
	for (l = 0; min <= max; l++)
	potr[l] = min++;
	return (potr);
}
