#include "main.h"

/**
  * binary_to_uint - the function name
  * @b: parameter of type const char *.
  * Return: unsigned int .
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int dec = 0;
	int power = 1;
	int j;

	if (!b)
	{
		return (0);
	}
	for (x = 0; b[x]; x++)
	{
		if (b[x] != '1' && b[x] != '0')
		{
			return (0);
		}
	}
	for (j = x - 1; j >= 0; j--)
	{
		if (b[j] == '1')
		{
			dec += power;
		}
		power *= 2;
	}
	return (dec);
}
