#include "lists.h"

/**
 * add_dnodeint - A function that adds a new node at the beginning of the list.
 *
 * @head: The head of the list.
 * @n: The int to store in the node.
 *
 * Return: The address of the new node.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	if (*head)
	{
		node->next = *head;
		node->prev = (*head)->prev;
		(*head)->prev = node;
		*head = node;
		return (node);
	}

	node->next = *head;
	node->prev = NULL;
	*head = node;
	return (node);
}
