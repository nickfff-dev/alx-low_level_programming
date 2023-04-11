#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the  of coins for given amount of change
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int chnge, x, cents;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	chnge = atoi(argv[1]);
	cents = 0;

	if (chnge < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && chnge >= 0; x++)
	{
		while (chnge >= coins[x])
		{
			cents++;
			chnge -= coins[x];
		}
	}

	printf("%d\n", cents);
	return (0);
}
