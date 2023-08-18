#include "lists.h"
/**
* add_dnodeint - function that computes size dlinkedlist
* @head: pointer to pointer to head of list
* @n: value to insert
* Return: pointer to inserted node or NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp;
dlistint_t *newnode;

newnode = (dlistint_t *)malloc(sizeof(dlistint_t));
if (newnode == NULL)
{
return (NULL);
}
newnode->n = n;
if (*head == NULL)
{
newnode->next = *head;
newnode->prev = NULL;
*head = newnode;
return (newnode);
}
temp = *head;
newnode->next = temp;
temp->prev = newnode;
newnode->prev = NULL;
*head = newnode;
return (newnode);
}
