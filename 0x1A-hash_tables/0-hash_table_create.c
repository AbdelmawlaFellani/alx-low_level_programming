#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table, or NULL if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	uint i;
	hash_table_t *table;


	if (size == 0)
		return (NULL);

	table = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (!table)
	{
		return (NULL);
	}
	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));
	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
