#include "search_algos.h"

/**
 * linear_search - search an element (linear algorithm)
 * @array: sorted array
 * @size: amount of elements in array
 * @value: value of searched element
 * Return: index of element if found, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size && array[i])
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			break;
		i++;
	}
	if (i >= size)
		return (-1);
	else
		return (i);
}
