#include "lists.h"
/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
* @head: pointer to head of the list
* @index: index of the node, starting from 0
* Return: nth node of a dlistint_t linked list or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *temp;

if (head == NULL)
	return (NULL);
temp = head;
while (temp != NULL)
{
if (count == index)
{
return (temp);
}
count++;
temp = temp->next;
}
return (NULL);
}
