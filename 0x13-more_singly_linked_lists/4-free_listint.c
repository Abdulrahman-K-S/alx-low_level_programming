#include "lists.h"

/**
 * free_listint - A function that frees a `listint_t` list.
 *
 * @head: The list to free.
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	temp = head->next;
	free(head);
	free_list(temp);
}
