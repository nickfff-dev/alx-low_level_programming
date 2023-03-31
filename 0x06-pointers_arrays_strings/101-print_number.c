#include "main.h"

/**
 * print_number - prints an integer using only _putchar;
 * @x: integer to be printed;
 */
void print_number(int x)
{
	unsigned int b;
	if (x < 0)
	{
		b = -x;
		_putchar('-');
	} else
	{
		b = x;
	}

	if (b / 10)
		print_number(b / 10);

	_putchar((b % 10) + '0');
}
