#include "lists.h"

/**
 * listint_len - A function that returns the number of elements
 *               in a linked `listint_t` list.
 *
 * @h: The head of the linked list.
 *
 * Return: The number of elements in the Linked list.
*/
size_t listint_len(const listint_t *h)
{
	unsigned int num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}

	return (num);
}
