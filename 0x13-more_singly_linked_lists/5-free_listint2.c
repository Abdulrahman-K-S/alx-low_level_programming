#include "lists.h"

/**
 * free_listint2 - A function that frees a `listint_t` list.
 *
 * @head: The head of the list to be freed.
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	head = NULL;
}
