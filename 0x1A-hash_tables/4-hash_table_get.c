#include "hash_tables.h"

/**
 * hash_table_get - Gets an element of the hash table
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: the value associated with the element
 * or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	uint index;
	hash_node_t *curr_node;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	curr_node = ht->array[index];

	while (curr_node != NULL)
	{
		if (strcmp(curr_node->key, key) == 0)
		{
			return (curr_node->value);
		}
		curr_node = curr_node->next;
	}
	return (NULL);
}
