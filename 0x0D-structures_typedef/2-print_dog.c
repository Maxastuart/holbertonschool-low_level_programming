#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the dog's information
 * @d: pointer to structure dog
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (!d->owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
