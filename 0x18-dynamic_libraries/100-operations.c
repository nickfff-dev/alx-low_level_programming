#include <stdio.h>

/**
 * add - a function that adds two integers.
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of a and b
 */
int add(int a, int b)
{
    return (a + b);
}

/**
 * sub - a function that subtracts two integers.
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference of a and b
 */
int sub(int a, int b)
{
    return (a - b);
}

/**
 * mul - a function that multiplies two integers.
 * @a: first integer
 * @b: second integer
 *
 * Return: the product of a and b
 */
int mul(int a, int b)
{
    return (a * b);
}

/**
 * div - a function that divides two integers.
 * @a: first integer
 * @b: second integer
 *
 * Return: the quotient of a and b, or 0 if b is 0
 */
int div(int a, int b)
{
    if (b != 0)
        return (a / b);
    else
        return (0);
}

/**
 * mod - a function that calculates the remainder of the division of two integers.
 * @a: first integer
 * @b: second integer
 *
 * Return: the remainder of the division of a by b, or 0 if b is 0
 */
int mod(int a, int b)
{
    if (b != 0)
        return (a % b);
    else
        return (0);
}
