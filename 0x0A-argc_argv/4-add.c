#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds numbers 
 * @argc: arg count
 * @argv: array of arg pointer
 * Return: 0  or 1
 */

int main(int argc, char **argv)
{
	int sum;

	if (argc <= 1)
	{
		printf("%d\n", 0);
	}
	if (isdigit(argv[1]) == 0 || isdigit(argv[2]) == 0)
	{
		printf("%s\n", "Error");
		return (1);
	}
	sum = atoi(argv[1]) + atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
}
