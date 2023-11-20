#include "hash_tables.h"

/**
 * create_node - Creates a new hash node.
 * @key: The key string.
 * @value: The value associated with the key.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (!node)
		return (NULL);
	
	if (!key || key[0] == '\0')
        	return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);

	return (node);
}

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value pair.
 * @key: The key string.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *curr_node;
	uint index;

	node = create_node(key, value);
	if (!node)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	curr_node = ht->array[index];

	if (curr_node == NULL)
	{
		ht->array[index] = node;

	}
	else
	{
		if (strcmp(curr_node->key, key) == 0)
		{
			strcpy(ht->array[index]->value, value);
		}
	}
	return (1);
}
