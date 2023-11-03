#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table.
 *
 * @ht: The hash table.
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i;
	short start = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node)
		{
			if (start == 1)
				printf(", ");
			else
				start = 1;
			printf("'%s': '%s'", node->key, node->value);

			node = node->next;
		}
	}

	printf("}\n");
}
