#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the information of a dog structure.
 * @d: Pointer to the dog structure to print.
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.2f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
