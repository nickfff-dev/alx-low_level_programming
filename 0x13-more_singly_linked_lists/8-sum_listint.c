#include "lists.h"

/**
* sum_listint - function that returns the sum of all the data (n) of a
* @head: pointer to the first element in the list
* Return: the sum of all the data (n) of a listint_t linked list
*/
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *temp_node = head;

	while (temp_node)
	{
		total += temp_node->n;
		temp_node = temp_node->next;
	}
	return (total);
}
