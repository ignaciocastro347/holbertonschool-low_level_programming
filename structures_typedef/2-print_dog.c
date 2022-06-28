#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print each attribute of a dog
 * @d: pointer to dog structure
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "nil");
		printf("Age: %s\n", d->age || "nil");
		printf("Owner: %s\n", d->owner ? d->owner : "nil");
	}
}
