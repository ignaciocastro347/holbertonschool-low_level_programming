#include "dog.h"
#include <stdlib.h>
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
	
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog-> owner = owner;
	return (dog);
}
