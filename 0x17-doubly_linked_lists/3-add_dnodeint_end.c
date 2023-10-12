#include "lists.h"

/**
 * add_dnodeint_end - A function that inserts a node at the end.
 *
 * @head: The head of the list.
 * @n: The int to store in the node.
 *
 * Return: The address of the node.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *current;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	if (*head)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		node->next = NULL;
		node->prev = current;
		current->next = node;
		return (node);
	}

	node->next = *head;
	node->prev = NULL;
	*head = node;
	return (node);
}
