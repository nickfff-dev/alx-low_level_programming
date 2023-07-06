#include "main.h"

/**
  *print_binary - function that prints binary from number
  *@n: the unsigned int to be converted
  *Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int displayBitMask;
	int c = 0;
	int k = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (c = ((sizeof(int) * 8) - 1); c >= 0; c--)
	{
		displayBitMask = 1 << c;

		if (n & displayBitMask)
		{
			k = 1;
			_putchar('1');
		}
		else if (k == 1)
		{
			_putchar('0');
		}
	}
}
