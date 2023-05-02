#include "lists.h"

/**
* pop_listint - function that deletes the head node of a linked list
* @head: a pointer to the pointer to the first element in the list
* Return: the head node's data (n) or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int num;

	if (!head || !*head)
	{
		return (0);
	}
	num = (*head)->n;
	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;
	return (num);
}
