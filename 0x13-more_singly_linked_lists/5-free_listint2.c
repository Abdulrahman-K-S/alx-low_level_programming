#include "lists.h"

/**
 * free_listint2 - A function that frees a `listint_t` list.
 *
 * @head: The head of the list to be freed.
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}

	*head = NULL;
}
