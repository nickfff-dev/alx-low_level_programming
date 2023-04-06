#include "main.h"

int _base_sqr(int n, int x);
/**
 * _sqrt_recursion - function to find sqrt recursively
 * @n: the number to find square root
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_base_sqr(n, 0));
}
/**
 * _base_sqr - helper function to recurse from 0 to n
 * @n:  the number to recurse to
 * @x: the number to start from
 * Return: int
 */

int _base_sqr(int n, int x)
{
	/* the base condition */
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	return (_base_sqr(n, x + 1));
}



