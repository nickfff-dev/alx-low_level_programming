#include "lists.h"
/**
 * listint_len - function that count nodes in a sl
 * @h -  head of the sl
 * Return: count of the nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	while(h)
	{
		count++;
	}
	return (count);
}
