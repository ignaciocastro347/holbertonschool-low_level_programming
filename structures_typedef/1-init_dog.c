#include "dog.h"
/**
 * init_dog - Create a variable based on dog structure
 * @d: struct dog type
 * @name: string value
 * @age: float value
 * @owner: string value
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
