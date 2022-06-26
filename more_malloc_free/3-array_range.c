#include "main.h"
#include <stdlib.h>

/**
 * array_range - array of integers.
 * @min: min number value
 * @max: max value number
 * Return: pointer to new int array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		arr[i] = i;
	return (arr);
}
