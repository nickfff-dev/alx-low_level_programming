#include "lists.h"

/**
* free_listint - function that frees a listint_t list
* @head: pointer to the first element in the list
*/
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
