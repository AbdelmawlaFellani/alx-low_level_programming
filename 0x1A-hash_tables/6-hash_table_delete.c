#include "hash_tables.h"

/**
 * hash_table_delete - Deletes the hash table
 * @ht: the hash table
 * 
 * Return: (void)
 */
void hash_table_delete(hash_table_t *ht)
{
	uint i = 0;
	hash_node_t *temp = NULL, *next = NULL;

	if (!ht)
		return;

	for (; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			next = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = next;
		}
	}
	free(ht->array);
	free(ht);
}
