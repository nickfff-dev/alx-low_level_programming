#include "lists.h"
/**
* add_dnodeint_end - function that adds node to end of list
* @head: pointer to pointer to head of list
* @n: value to insert
* Return: pointer to inserted node or NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp, *newnode;

newnode = (dlistint_t *) malloc(sizeof(dlistint_t));
if (newnode == NULL)
	return (NULL);
newnode->n = n;
newnode->next = NULL;
if (*head == NULL)
{
newnode->prev = NULL;
*head = newnode;
return (newnode);
}
temp = *head;
if (temp->next == NULL)
{
newnode->prev = temp;
temp->next = newnode;
return (newnode);
}
while (temp->next != NULL)
{
temp = temp->next;
}
newnode->prev = temp;
temp->next =  newnode;
return (newnode);
}
