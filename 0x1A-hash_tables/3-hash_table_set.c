#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table.
 *
 * @ht: The hash table.
 * @key: The key to search in the hash table.
 * If the key is already in the hash table then change the value to the
 * new value.
 * @value: The value to place in that key.
 *
 * Return: 1 indicating it's a success otherwise 0.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *newNode;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	if (node && strcmp(key, node->key) == 0)
	{
		free(node->value);
		node->value = strdup(value);
		return (1);
	}

	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
