#include "lists.h"

/**
 * print_dlistint - A function that prints the dlistint and returns
 *                  the length of the list.
 *
 * @h: The head of the list.
 *
 * Return: The length of the list.
*/
size_t print_dlistint(const dlistint_t *h)
{
	int length = 0;

	while (h)
	{
		printf("%d\n", h->n);
		length++;
		h = h->next;
	}

	return (length);
}
