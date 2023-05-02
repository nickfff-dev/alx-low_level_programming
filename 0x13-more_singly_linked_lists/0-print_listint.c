#include "lists.h"

/**
* print_listint - function that prints all the elements of a listint_t list
* @h: pointer to the list
* Return: an unsigned integer, number of nodes
*/


size_t print_listint(const listint_t *h)
{
	listint_t *ptr = head;
	int count = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}