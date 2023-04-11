#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passe
 * @argc: the number of arguments
 * @argv: the array of pointers to args
 * Return: 0 success
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
