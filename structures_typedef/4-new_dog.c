#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Create a new dog
 * @name: name as string
 * @age: as float
 * @owner: as string
 * Return: pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned long int i = 0, j = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (; i <= strlen(name); i++)
		dog->name[i] = name[i];
	for (; j <= strlen(owner); j++)
		dog->owner[j] = owner[j];
	dog->age = age;
	return (dog);
}
