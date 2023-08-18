#include "lists.h"
/**
 * print_dlistint - function that prints dlinkedlist
 * @h: pointer to head of list
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp = h;

	if (temp == NULL)
	{
		return (i);
	}
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
