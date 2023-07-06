#include "main.h"

/**
  * clear_bit - function to clear bit at given index
  * @n: the unsigned long number to modify
  * @index: index of the bit in the bit array
  * Return: 1 if succesful and -1 if not
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int displayMask;

	if (index > (sizeof(unsigned long int) * 8) - 1)
	{
		return (-1);
	}
	displayMask = 1 << index;

	*n &= ~displayMask;
	return (1);
}
