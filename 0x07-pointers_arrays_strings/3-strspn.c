#include "main.h"
/**
 * _strspn - returns number of bytes
 * @s: the string to look in
 * @accept: find first occurence that isnt
 * Return: number of bytes as int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int count;
	int x;
	int y;

	count = 0;
	for (i = 0; *(s + i) != 0; i++)
	{
		x = 0;
		for (y = 0; y < 6; y++)
		{
			if (*(s + i) == *(accept + y))
			{
				count++;
				x = 1;
			}
		}
		if (x == 0)
		{
			return (count);
		}
	}
	return (0);
}
