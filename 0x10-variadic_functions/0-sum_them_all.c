#include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameters
* @n: the count of arguments passed
* Return: the sum of all its parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int sum = 0;
	va_list arr;

	if ( n == 0)
	{
		return (0);
	}
	va_start (arr, n);
	for (x = 0; x < n; x++)
	sum += va_arg (arr, int);
	va_end(arr);
	return (sum);
}
