#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog structure.
 * @d: Pointer to the dog structure to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: void
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
		d = malloc(sizeof(struct dog));
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
