#include "main.h"
#include <stdio.h>

/**
 * print_array - Print n values of an array of int values
 * @a: array of int values
 * @n: amount of values to print
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (a[i])
	{
		if (i < n)
		{
			if (i != 0)
				printf(", ");
			printf("%d", a[i]);
		}
		i++;
	}
	printf("\n");
}
