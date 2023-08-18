#include "lists.h"
/**
* dlistint_len - function that computes size dlinkedlist
* @h: pointer to head of list
* Return: size of list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *temp = h;

	if (temp == NULL)
	{
		return (len);
	}
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
