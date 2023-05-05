#include "main.h"

/**
  * get_endianness - the function name
  * Return: int .
 */
int get_endianness(void)
{
	int x;

	x = 1;
	if (*(char *)&x == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
