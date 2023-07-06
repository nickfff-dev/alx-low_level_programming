#include "main.h"

/**
  * get_endianness - function to determine machine endeianess
  *Return: int
  */

int get_endianness(void)
{
	int j = 1;
	char *c = (char *)&j;


	if (*c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
