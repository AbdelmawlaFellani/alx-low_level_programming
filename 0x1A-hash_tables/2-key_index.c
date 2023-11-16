#include "hash_tables.h"

/**
 * key_index - This function returns the index of a key.
 * @key: The array of unsigned characters.
 * @size: The size of the array.
 *
 * Return: The index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	uint idx;

	idx = hash_djb2(key) % size;
	return (idx);
}
