#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - A function that prints a struct dog.
 *
 * @d: Pointer to the dog struct.
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s", d->name);

	if (d->age == NULL)
		printf("Age: (nil)");
	else
		printf("Age: %f", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s", d->owner);
}
