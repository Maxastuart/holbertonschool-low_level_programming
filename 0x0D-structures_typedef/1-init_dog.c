#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the dog structure
 * @d: pointer to structure dog
 * @name: character string
 * @age: float
 * @owner: character string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
