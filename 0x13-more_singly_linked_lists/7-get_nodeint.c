#include "lists.h"

/**
* get_nodeint_at_index - function returns the nth node of a linked list
* @head: pointer to the first element in the list
* @index: index of the node, starting at 0
* Return: the nth node of a linked list, or NULL if the node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp_node = head;

	while (temp_node && count < index)
	{
		temp_node = temp_node->next;
		count++;
	}
	return (temp_node ? temp_node : NULL);
}
