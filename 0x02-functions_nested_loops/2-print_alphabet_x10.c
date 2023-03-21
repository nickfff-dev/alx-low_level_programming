#include "main.h"
/**
 * main -entry point of file
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int count;
	char dn;

	count =0;
	while(count < 10)
	
	{
	 dn = 'a';
	 while(dn <= 'z')
	 {
		 _putchar(dn);
		 dn++;
	 }
	 _putchar('\n');
	 count ++;
	}

}
