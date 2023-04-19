#include <stdlib.h>
#include "function_pointers.h"

/**
* print_name - function that prints a name
* @name: pointer to the name to print
* @f: pointer to the function to use to print the name
*/
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
