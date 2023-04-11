#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints first argumnent of main
 * @argc: the number of variables passed
 * @argv: the array of cli variables
 * Return: exit success
 */


int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (0);
}
