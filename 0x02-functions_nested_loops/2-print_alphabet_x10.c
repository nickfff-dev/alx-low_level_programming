#include "main.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char dn;
	int count;

	count = 0;

	while (count < 10)
	{
		dn = 'a';
		while (dn <= 'z')
		{
			_putchar(dn);
			dn++;
		}
		_putchar('\n');
		count++;
	}
}
