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
 _putchar('/n');

}
  
int main(void)
{
	print_alphabet();
	return(0);
}
