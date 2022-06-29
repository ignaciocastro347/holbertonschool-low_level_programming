#include "function_pointers.h"
/**
 * int_index - execute a function to search an element in array
 * @array: array of int values
 * @size: amount of elements in array
 * @cmp: pointer to a function to search
 * Return: int value, position of searched element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
