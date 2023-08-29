#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a
 *                 `listint_t` list.
 *
 * @h: The head of the linked list.
 *
 * Return: The number of elements in @h.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int num = 0;
	listint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		num++;
	}

	return (num);
}
