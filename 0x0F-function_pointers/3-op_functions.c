#include "3-calc.h"

/**
 * op_add - function that adds two integers
 * @a: the first integer to add
 * @b: the second integer to add
 * Return: an integer that is the sum of a and b
 */
int op_add(int a, int b)
{
		return (a + b);
}

/**
 * op_sub - function that subtracts one integer from another
 * @a: the integer to subtract from
 * @b: the integer to subtract
 * Return: an integer that is the difference of a and b
 */
int op_sub(int a, int b)
{
		return (a - b);
}

/**
 * op_mul - function that multiplies two integers
 * @a: the first integer to multiply
 * @b: the second integer to multiply
 * Return: an integer that is the product of a and b
 */
int op_mul(int a, int b)
{
		return (a * b);
}

/**
 * op_div - function that divides one integer by another
 * @a: the integer to divide
 * @b: the integer to divide by
 * Return: an integer that is the result of the division of a by b
 */
int op_div(int a, int b)
{
		return (a / b);
}

/**
 * op_mod - function that returns the remainder of the division of two integers
 * @a: the integer to divide
 * @b: the integer to divide by
 * Return: an integer that is the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
		return (a % b);
}
