#include "lists.h"
/**
 * add_nodeint_end - function that adds new node at the end
 * @head:double pointer to the list head
 * @n: data for the new node
 * Return: address of the new node or null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node = (listint_t *)malloc(sizeof(listint_t));
	listint_t *temp_node = *head;

	if (last_node == NULL)
	{
		return (NULL);
	}
	last_node->n = n;
	last_node->next = NULL;
	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}

	temp_node->next = last_node;
	return (last_node);

}
