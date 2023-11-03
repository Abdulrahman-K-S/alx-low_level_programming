#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key.
 *
 * @ht: The hash table to search in.
 * @key: The key to search in the hash table.
 *
 * Return: The valye of the key inserted.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *element = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	element = ht->array[index];

	if (element == NULL)
		return (NULL);

	while (strcmp(key, element->key) != 0)
		element = element->next;

	return (element->value);
}
