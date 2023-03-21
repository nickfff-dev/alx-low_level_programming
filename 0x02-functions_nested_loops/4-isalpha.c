#include "main.h"
/**
 * _isalpha - checks if character is letter in any case
 * @c: hceck if this is  letter
 * Return: 1 if letter 0 if not
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{	
		return (1);
	};
	return (0);
}
