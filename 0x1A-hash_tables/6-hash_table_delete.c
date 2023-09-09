#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *y, *new_nd;
	unsigned long int j;

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			y = ht->array[j];
			while (y != NULL)
			{
				new_nd = y->next;
				free(y->key);
				free(y->value);
				free(y);
				y = new_nd;
			}
		}
	}
	free(head->array);
	free(head);
}
