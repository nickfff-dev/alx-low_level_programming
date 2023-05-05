#include "main.h"
#include <stdlib.h>

/**
  * set_bit - the function name
  * @n: parameter of type unsigned long int *.
  * @index: parameter of type unsigned int .
  * Return: int .
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = *n | (1 << index);
	return (1);
}
