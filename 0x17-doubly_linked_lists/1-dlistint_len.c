#include "lists.h"

/**
 * dlistint_len - A function that returns the length of the list.
 *
 * @h: The head of the list.
 *
 * Return: The length of the list.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}

	return (length);
}
