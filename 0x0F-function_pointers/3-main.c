#include "3-calc.h"

/**
* main - a program that excecutes arithmetic operations
* @argc: count of arguments passed
* @argv: an array of pointers to the arguments passed
* Return: 0 on success, 98 on failure (wrong number of arguments),
* 99 on failure (invalid operator), 100 on failure (division by zero)
*/
int main(int argc, char *argv[])
{
	int num1, num2, res;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	o = *argv[2];
	if ((o == '/' || o == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = func(num1, num2);
	printf("%d\n", res);
	return (0);
}
