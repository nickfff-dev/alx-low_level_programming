#include 'main.h'
/**
 * main - entry point for main func
 * Return: int 0 if success
 */
void print_alphabet(void)
{
 char d = 'a';
 while(d <= 'z')
 {
   _putchar(d);
   d++;
 }
 _putchar('/n');

}
  
int main(void)
{
	print_alphabet();
	return(0);
}

