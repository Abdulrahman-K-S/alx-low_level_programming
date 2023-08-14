#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - A function that gets the length of the entered word.
 *
 * @str: The word to get it's length.
 *
 * Return: The length of @str.
*/

int _strlen(const char *str)
{
	int length = 0;

	while (*str)
		length++;

	return (length);
}

/**
 * _strcopy - A function that copies the contents of src into dest.
 *
 * @dest: The destination of the copy.
 * @src: The source of the copy.
 *
 * Return: @dest.
*/

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}


/**
 * new_dog - A function that creates a new dog.
 *
 * @name: Name for the new dog.
 * @age: The age of the new dog.
 * @owner: The owner of the new dog.
 *
 * Return: A pointer to the new dog created.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (!name || age < 0 || !owner)
		return (NULL);

	newdog = (dog_t *) malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}

	newdog->name = _strcopy(newdog->name, name);
	newdog->age = age;
	newdog->owner = _strcopy(newdog->owner, owner);

	return (newdog);
}
