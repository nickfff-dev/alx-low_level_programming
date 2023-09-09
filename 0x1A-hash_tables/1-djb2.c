#include "hash_tables.h"

/**
 * hash_djb2 - Hash function with the djb2 algorithm.
 * @str: The string to hash.
 * Return: hash.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int x;
	int count;

	x = 5381;
	while ((count = *str++))
		x = ((x << 5) + x) + count; /* x * 33 + count */

	return (x);
}
