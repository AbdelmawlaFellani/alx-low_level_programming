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
	if (!key || !value)
		return (NULL);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
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
	if (!ht || !node)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	curr_node = ht->array[index];

	while (curr_node != NULL)
	{
		if (strcmp(curr_node->key, key) == 0)
		{
			free(curr_node->value);
			curr_node->value = strdup(value);
			if (curr_node->value == NULL)
				return (0);
			return (1);
		}
		curr_node = curr_node->next;
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
