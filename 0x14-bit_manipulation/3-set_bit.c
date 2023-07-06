#include "main.h"

/**
  * set_bit - sets a bit to 1 at given index
  * @n: pointer to unsigned int
  *@index: index of bit to set
  *Return: an int after set bit
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int displayMask;

	if (index > (sizeof(unsigned long int) * 8) - 1)
	{
		return (-1);
	}

	displayMask = 1 << index;
	*n |= displayMask;
	return (1);
}
