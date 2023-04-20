#include "variadic_functions.h"

/**
* print_numbers - function that prints numbers, followed by a new line
* @separator: the arg separator string to be printed
* @n: the count of arguments passed to the function
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list arr;

	va_start(arr, n);
	for (j = 0; j < n; j++)
	{
		if (!separator)
		{
			printf("%d", va_arg(arr, int));
		}
		else if (separator && j == 0)
		{
			printf("%d", va_arg(arr, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(arr, int));
		}
	}
	va_end(arr);
	printf("\n");
}
