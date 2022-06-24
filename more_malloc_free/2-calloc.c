#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: amount elements
 * @size: amount of bytes per space
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	void *arr2;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	for (; i < nmemb; i++)
		arr[i] = 0;

	arr2 = arr;
	return (arr2);
}
