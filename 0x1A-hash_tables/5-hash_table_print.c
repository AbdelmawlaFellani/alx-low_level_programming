#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: hash table
 *
 * Return: (void)
 */
void hash_table_print(const hash_table_t *ht)
{
	uint i = 0;
	char *comma = "";
	hash_node_t *node;

	if (!ht || !ht->array)
		return;

	putchar('{');

	while (i < ht->size)
	{
		node = ((ht->array)[i]);
		while (node)
		{
			printf("%s'%s': '%s'", comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
		i++;
	}
	putchar('}');
	putchar('\n');
}
