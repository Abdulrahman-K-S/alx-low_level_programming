#include "lists.h"

/**
 * sum_dlistint - A function that calculates the sum of all the ints in a
 *                linked list.
 *
 * @head: The head of the list.
 *
 * Return: The sum of the ints in the list.
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head)
	{
		while (temp)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}

	return (sum);
}
