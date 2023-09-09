#include "hash_tables.h"

/**
 * hash_table_get - fetch the value associated with
 * a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 * Return: NULL If the key cannot be matched
 * the value pair of key ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ne_node;
	unsigned long int position;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	position = key_index((const unsigned char *)key, ht->size);
	if (position >= ht->size)
		return (NULL);

	ne_node = ht->array[position];
	while (ne_node && strcmp(ne_node->key, key) != 0)
		ne_node = ne_node->next;

	return ((ne_node == NULL) ? NULL : ne_node->value);
}
