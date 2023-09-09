#include "hash_tables.h"

/**
 * hash_table_set - method for inserting or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 * Return: on failure - 0.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *mystr;
	unsigned long int position, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	mystr = strdup(value);
	if (mystr == NULL)
		return (0);

	position = key_index((const unsigned char *)key, ht->size);
	for (x = position; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = mystr;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(mystr);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = mystr;
	new_node->next = ht->array[position];
	ht->array[position] = new_node;

	return (1);
}
