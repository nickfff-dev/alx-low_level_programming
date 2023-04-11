#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments
 * @argc: arg count
 * @argv: pointer to arrayof arg pointers
 * Return: 0 success
 */

int main(int argc, char **argv)
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("&s\n", argv[i]);
	}
	return (0);
}
