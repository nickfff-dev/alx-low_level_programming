#include "main.h"

/**
 * set_string - assigns a value to pointer
 * @s: pointer to pointer we need to set to
 * @to: string to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
