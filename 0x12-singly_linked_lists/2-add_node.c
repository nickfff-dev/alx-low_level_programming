#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - function that adds a new node at the beginning of a list_t list
* @head: a pointer to a list_t
* @str: a pointer to a string
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
		list_t *l;
		unsigned int count = 0;

		while (str[count])
		{
			count++;
		}
		l = malloc(sizeof(list_t));
		if (!l)
		{
			return (NULL);
		}
		l->str = strdup(str);
		l->count = count;
		l->next = (*head);
		(*head) = l;
		return (*head);
}
