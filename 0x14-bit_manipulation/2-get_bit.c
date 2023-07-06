#include "main.h"

/**
 *get_bit - function that returns a bit at index
 *@n: the unsigned integer to find bit
 *@index: the index of bit to find
 *Return: an int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int displayBitMask;

	if (index > (sizeof(unsigned long int) * 8) - 1)
	{
		return (-1);
	}
	displayBitMask = n >> index;
	return (displayBitMask & 1);
}
