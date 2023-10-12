#include "lists.h"

/**
 * free_dlistint - A function that frees that list.
 *
 * @head: The head of the list.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	temp = head->next;
	free(head);
	free_dlistint(temp);
}
