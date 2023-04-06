#include "main.h"

int _base_prime(int n, int j);
/**
 * is_prime_number - tells if number is prime or not
 * @n: the number to be checked
 * Return: 0 if not prime 1 if prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_base_prime(n, n - 1));
}

/**
 * _base_prime - checks for prime number recursively
 * @n: the number to check
 * @j: the number to start with
 * Return: 1 if is prime and 0 otherwise
 */

int _base_prime(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (n % j == 0 && j > 0)
	{
		return (0);
	}
	return (_base_prime(n, j - 1));
}
