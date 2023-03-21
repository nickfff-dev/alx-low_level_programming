#include "main.h"

/**
 * main - entry point for main func
 * Return: int 0 if success
 */
void print_alphabet(void)
{
 char letter = 'a';
 while(letter <= 'z')
 {
   _putchar(letter);
   letter++;
 }; 
}
  
int main(void)
{
	print_alphabet();
	_putchar('/n');
	return(0);
}
