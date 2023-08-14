#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * init_dog - A function that initialize a variable of type struct dog.
 *
 * @d: Pointer to the dog struct.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner's name of the dog.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
