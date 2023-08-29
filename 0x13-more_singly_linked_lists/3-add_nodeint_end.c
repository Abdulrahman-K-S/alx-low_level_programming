#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node at
 *                   the end of a `listint_t` list.
 *
 * @head: The head of the exisiting linked list.
 * @n: The number to be added to the new node.
 *
 * Return: The address of the new node or NULL if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t *));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	else
	{
		temp = *head;

		while (temp->next)
			temp = temp->next;

		newNode->n = n;
		temp->next = newNode;
		return (temp);
	}
}
