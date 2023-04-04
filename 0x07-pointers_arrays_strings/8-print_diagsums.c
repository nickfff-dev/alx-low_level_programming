#include <stdio.h>
#include "main.h"

/**
 * print_diagnums - sum of the two diagonals of a square matrix of integers
 * @a: square matrix of integers
 * @size: size of the square matrix of integers
 */
void print_diagnums(int *a, int size)
{
	int j;

	unsigned int num, num1;

	num = 0;
	num1 = 0;

	for (j = 0; j < size; j++)
	{
		num += a[(size * j) + j];
		num1 += a[(size * (j + 1)) - (j + 1)];
	}

	printf("%d, %d\n", num, num1);
}
