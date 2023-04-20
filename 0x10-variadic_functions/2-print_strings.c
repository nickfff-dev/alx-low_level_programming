#include "variadic_functions.h"

/**
* print_strings - function that prints strings, followed by a new line
* @separator: the arg separator string to be printed
* @n: the count of arguments passed to the function
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *word;
	va_list arr;

	va_start(arr, n);
	for (x = 0; x < n; x++)
	{
		word = va_arg(arr, char *);
		word = word ? word : "(nil)";
		if (!separator)
		{
			printf("%s", word);
		}
		else if (separator && x == 0)
		{
			printf("%s", word);
		}
		else
		{
			printf("%s%s", separator, word);
		}
	}
	printf("\n");
	va_end(arr);
}
