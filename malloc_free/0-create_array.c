#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - create and initialize array with a char
 * @size: amount of bytes to use in the array
 * @c: char to initialize array with
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (; i < size; i++)
		arr[i] = c;
	return (arr);
}
