#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - that allocates memory using malloc
 * @b: amount bytes to save
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL) 
		exit(98);
	return (arr);
}
