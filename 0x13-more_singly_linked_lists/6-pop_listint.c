#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of
 *               a listint_t linked list, and returns the
 *               head node’s data (n).
 *
 * @head: The head of the linked list.
 *
 * Return: The value of the popped node.
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	temp = (*head)->next;
	num = (*head)->n;
	free(*head);
	*head = temp;
	return (num);
}
