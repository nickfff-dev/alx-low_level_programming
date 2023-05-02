#include "lists.h"

/**
* add_nodeint - function that adds new head to list
* @head: the head of the sll
* @n: the data for the new node
* Return: address of the new node or NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{       listint_t *niu_node = (listint_t *)malloc(sizeof(listint_t));

	if (niu_node == NULL)
	{
		return (NULL);
	}
	niu_node->n = n;
	niu_node->next = *head;
	*head = niu_node;
	return (niu_node);
}
