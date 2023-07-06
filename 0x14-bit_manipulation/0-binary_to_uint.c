#include "main.h"

/**
  *binary_to_uint - function that converts binary to decimal
  *@b: pointer to array of binary chars
  *Return: unsigned int of same value as binary passed
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int result = 1;
	int x, i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
	}

	for (x = i - 1; x >= 0; x--)
	{
		if (b[x] == '1')
		{
			n += result;
		}
		result *= 2;
	}

	return (n);
}
