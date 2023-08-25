#include "lists.h"
#include <stdlib.h>

/**
 * print_list - A function that prints all the elements of a list_t list.
 *
 * @h: The linked list.
 *
 * Return: The number of elements present in the linked list.
*/

size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	return (i);
}
