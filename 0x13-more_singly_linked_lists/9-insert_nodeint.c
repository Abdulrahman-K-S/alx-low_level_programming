#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new
 *                           node at a given position.
 *
 * @head: The head aka the first node of the linked list.
 * @idx: The index to insert the new node.
 * @n: The int value for the new node.
 *
 * Return: The address of the newly inserted node.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}

		i++;
		node = node->next;
	}
	free(new_node);
	return (NULL);
}
