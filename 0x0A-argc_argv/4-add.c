#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - adds numbers
 * @argc: arg count
 * @argv: array of arg pointer
 * Return: 0  or 1
 */

int main(int argc, char **argv)
{
	int sum, i, fnum;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i] > '9' || argv[i] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
			fnum = atoi(argv[i]);
			if (fnum >= 0)
			{
				sum += fnum;
			}
		}
		printf("%d\n", sum);
	} else
	{
		printf("0\n");
	}
	return (0);
}
