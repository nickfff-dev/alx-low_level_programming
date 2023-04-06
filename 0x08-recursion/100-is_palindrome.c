#include "main.h"

int _check_strln(char *s);
int _run_palindrom(char *s, int x, int y);
/**
 * is_palindrome - tells whether string is palindrome or not
 * @s: the string to check
 * Return: 1 if palindrom or 0 if not
 */

int is_palindrome(char *s)
{
	if (*(s) == 0)
	{
		return (0);
	}
	return (_run_palindrom(s, 0, _check_strln(s)));
}

/**
 * _check_strln - returns length of strng
 * @s: the string to count
 * Return - int 
 */

int _check_strln(char *s)
{
	if (*(s) == 0)
	{
		return (0);
	}
	return (1 + _check_strln(s + 1));
}

/**
 * _run_palindrom_-  recursive palindrom string test
 * @s: the stringg to test
 * @x: the number to start counting from
 * @y: length of the string
 * Return: int 1 or 0
 */

int _run_palindrom(char *s, int x, int y)
{
	if (*(s + x) != *(s + y - 1))
	{
		return (0);
	}
	if (x >= y)
	{
		return(1);
	}
	return (_run_palindrom(s, x + 1, y - 1));
}
