#include "search_algos.h"

/**
 * binary_search - search an element (binary algorithm)
 * @array: sorted array
 * @size: amount of elements
 * @value: searched value
 * Return: index of element if found, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = (size - 1) / 2, j;
	size_t start = 0, end = size - 1;

	while (array[i] && i < end)
	{
		printf("Searching in array: ");
		j = start;
		while (j <= end)
		{
			printf("%d%s", array[j], j != end ? ", " : "");
			j++;
		}
		printf("\n");

		if (end == start)
		{
			i = size;
			break;
		}
		if (array[i] == value)
			break;
		else if (array[i] < value)
		{
			start = i + 1;
			i = start + ((end - start) / 2);
		}
		else
		{
			end = i - 1;
			i = end / 2;
		}
	}

	if (i >= end)
		return (-1);
	else
		return (i);

}
