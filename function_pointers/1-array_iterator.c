#include "function_pointers.h"
/**
 * array_iterator - execute a function in each index of array
 * @array: array of int values
 * @size: amount of elements in array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}

