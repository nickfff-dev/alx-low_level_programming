#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node_end - function that adds a btm node at the end of a list_t list
* @head: pointer to the head of the list
* @str: string to be added to the btm node
* Return: address of the btm element or NULL
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *btm;
	list_t *top = *head;
	unsigned int count = 0;

	while (str[count])
	{
		count++;
	}
	btm = malloc(sizeof(list_t));
	if (!btm)
	{
		return (NULL);
	}
	btm->str = strdup(str);
	btm->len = count;
	btm->next = NULL;
	if (*head == NULL)
	{
		*head = btm;
		return (btm);
	}
	while (top->next)
	{
		top = top->next;
	}
	top->next = btm;
	return (btm);
}
