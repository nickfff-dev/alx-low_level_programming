#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that prints the opcodes of its own main function.
* @argc: count of arguments passed
* @argv: an array of pointers to the arguments passed
* Return: 0 on success, 1 on failure (wrong number of arguments),
* 2 on failure (size < 0)
*/
int main(int argc, char *argv[])
{
	int size, j;
	char *list;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	list = (char *)main;
	for (j = 0; j < size; j++)
	{
		if (j == size - 1)
		{
			printf("%02hhx\n", list[j]);
			break;
		}
		printf("%02hhx ", list[j]);
	}
	return (0);
}
