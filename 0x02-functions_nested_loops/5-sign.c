#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the variable to check the sign
 * Return: int could be 1 if number is postive 0 
 */
int print_sign(int n)
{

	if (n == 0)
	{
		_putchar ('0');
		return (n);
	} else if (n > 0)
	{
		_putchar ('+');
		return (1);

	}
	_putchar ('-');
	return (-1);
}
