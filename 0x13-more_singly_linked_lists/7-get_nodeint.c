#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node
 *                        of a listint_t linked list.
 *
 * @head: The head of the linked list.
 * @index: The index of the node to get.
 *
 * Return: Pointer to the indexed node.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node = node->next, n++)
		;

	return (node);
}
