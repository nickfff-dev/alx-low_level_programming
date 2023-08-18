#include "lists.h"
/**
* sum_dlistint - returns the sum of all the data of a linked list
* @head: pointer to head of the list
* Return: sum of all the data (n) of a dlistint_t linked list or 0
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
