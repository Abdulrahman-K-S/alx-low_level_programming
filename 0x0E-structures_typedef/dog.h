#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct that could hold the dog's name, his/her owner's
 *              name and the dog's age.
 *
 * @name: Char pointer to the dogs name.
 * @owner: Char pointer to the owners name.
 * @age: A float for the dog's age.
*/

struct dog
{
	char *name, *owner;
	float age;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
