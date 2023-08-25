#include "lists.h"

/**
 * _strlen - A function that calculates the size of the entered string.
 *
 * @str: The string to get it's length.
 *
 * Return: The size of @str.
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}

/**
 * add_node_end - A function that adds a new node at
 * the end of a list_t list.
 *
 * @head: The head of the linked list.
 * @str: The string to be added at the back of the list.
 *
 * Return: The new list with the added node at the back.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *newNode, *temp;

	if (str != NULL)
	{
		newNode = malloc(sizeof(list_t));
		if (newNode == NULL)
			reutrn (NULL);

		newNode->str = strdup(str);
		newNode->len = _strlen(str);
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
				temp = temp->next

			temp->next = newNode;
			return (temp);
		}
	}

	return (NULL);
}
