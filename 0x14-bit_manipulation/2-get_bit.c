#include "main.h"
#include <stdlib.h>

/**
  * get_bit - the function name
  * @n: parameter of type unsigned long int .
  * @index: parameter of type unsigned int .
  * Return: int .
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
