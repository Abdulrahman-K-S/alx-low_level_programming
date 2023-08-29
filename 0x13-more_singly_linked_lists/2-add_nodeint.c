#include "lists.h"

/**
 * add_nodeint - A function that adds a new node at the
 *               beginning of a `listint_t` list.
 *
 * @head: The head of the linked list.
 * @n: The number to be placed in the new linked list.
 *
 * Return: The new list with the add
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t *));
	if (newNode == NULL)
		return (NULL);


	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
