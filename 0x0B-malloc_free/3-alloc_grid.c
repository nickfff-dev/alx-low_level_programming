#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a 2d array of integers
 * @width: width of the  2d array
 * @height: height of the 2d array
 * Return: pointer to the created matrix or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int **mlist;
	int i, w;

	if (height <= 0 || width <= 0)
		return (NULL);

	mlist = (int **) malloc(sizeof(int *) * height);

	if (mlist == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mlist[i] = (int *) malloc(sizeof(int) * width);
		if (mlist[i] == NULL)
		{
			free(mlist);
			for (w = 0; w <= i; w++)
				free(mlist[w]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (w = 0; w < width; w++)
		{
			mlist[i][w] = 0;
		}
	}
	return (mlist);
}
