#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 1; n < 11; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
