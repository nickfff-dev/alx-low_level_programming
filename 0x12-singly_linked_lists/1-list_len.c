#include <stdlib.h>
#include "lists.h"

/**
*list_len - function that returns the number of elements in a linked list_t
* @h: a pointer to a list_t
* Return: the number of elements in a linked list_t
*/
size_t list_len(const list_t *h)
{
	size_t el = 0;

	while (h)
	{
		el++;
		h = h->next;
	}
	return (el);
}
