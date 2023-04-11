#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - return mult of 2 numbers
 * @argc: number of args
 * @argv: array of pointers to args
 * Return: mult or 1
 */

int main(int argc, char **argv)
{	int multi;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	multi = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", multi);
	return (0);
}
