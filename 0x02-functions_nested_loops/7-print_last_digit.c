#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int)
{
	int x;

	if (j < 0)
		j = -j;

	x = j % 10;

	if (x < 0)
		x = -x;

	_putchar(x + '0');

	return (x);
}
