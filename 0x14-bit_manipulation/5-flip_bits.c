#include "main.h"

/**
  * flip_bits - flip bits to number and get number of flipped bits
  * @n: the number to flip bits
  * @m: the number to flip to
  * Return: int
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitDiff;
	int c = 0;

	bitDiff = n ^ m;

	while (bitDiff)
	{
		c++;
		bitDiff &= (bitDiff - 1);
	}
	return (c);

}
