#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash map.
 *
 * @size: The size of the hash map.
 *
 * Return: The hash map created.
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *hash_table = NULL;
	hash_node_t **hash_node_arr = NULL;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_node_arr = malloc(sizeof(hash_node_t) * size);
	if (!hash_node_arr)
		return (NULL);

	for (i = 0; i < size; i++)
		hash_node_arr[i] = NULL;

	hash_table->size = size;
	hash_table->array = hash_node_arr;
	return (hash_table);
}
