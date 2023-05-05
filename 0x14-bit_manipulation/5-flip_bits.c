#include "main.h"
#include <stdlib.h>

/**
  * flip_bits - the function name
  * @n: parameter of type unsigned long int .
  * @m: parameter of type unsigned long int .
  * Return: unsigned int .
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int remn;
	int count;

	remn = n ^ m;
	count = 0;
	while (remn)
	{
		count++;
		remn &= (remn - 1);
	}
	return (count);
}
