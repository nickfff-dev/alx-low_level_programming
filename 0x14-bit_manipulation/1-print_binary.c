#include "main.h"
#include <stdio.h>

/**
  * print_binary - the function name
  * @n: parameter of type unsigned long int .
  * Return: void .
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 63; i >= 0; i--)
	{
		k = n >> i;
		if (k & 1)
		{
			j = 1;
			_putchar('1');
		}
		else if (j == 1)
		{
			_putchar('0');
		}
	}
}
