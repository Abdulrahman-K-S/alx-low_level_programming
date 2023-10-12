#include "lists.h"

/**
 * get_dnodeint_at_index - A function that gets the node at a certain index.
 *
 * @head: The head of the list.
 * @index: The index desired.
 *
 * Return: The address of the indexed node.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int idx = 0;

	if (head)
	{
		while (temp)
		{
			if (idx == index)
				return (temp);

			temp = temp->next;
			idx++;
		}
	}

	return (NULL);
}
