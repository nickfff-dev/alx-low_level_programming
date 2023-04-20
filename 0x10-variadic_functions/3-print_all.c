#include "variadic_functions.h"

/**
* print_all - function that prints anything
* @format: a list of types of arguments passed to the function
* Return: void
*/
void print_all(const char * const format, ...)
{
	int x = 0;
	char *word, *separator = "";
	va_list arr;

	va_start(arr, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
			case 'c':
				printf("%s%c", separator, va_arg(arr, int));
				break;
			case 'x':
				printf("%s%d", separator, va_arg(arr, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arr, double));
				break;
			case 's':
				word = va_arg(arr, char *);
				word = word ? word : "(nil)";
				printf("%s%s", separator, word);
				break;
			default:
				x++;
				continue;
			}
			separator = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(arr);
}
