#include <stdio.h>
#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list.
* @h: pointer to list of structures to print
* Return: counter of nodes
*/
size_t print_list(const list_t *h)
{
	size_t iter = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		iter++;
	}
	return (iter);
}
