#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the
 *               data (n) of a listint_t linked list.
 *
 * @head: The head of the linked list.
 *
 * Return: The sum of the elements in the linked list.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
