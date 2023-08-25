#include "lists.h"

/**
 * add_node - A function that adds a new node at the beginning
 *            of a list_t list.
 *
 * @head: The head of the existing list.
 * @str: The string to be added in the new node.
 *
 * Return: The new linked list with the added new node.
*/

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t newNode;

	/* Regestering space for the new node */
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);

	while (str[i])
		i++;
	newNode->len = i;

	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
