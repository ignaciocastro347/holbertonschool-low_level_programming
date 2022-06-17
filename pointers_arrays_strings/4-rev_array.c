#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of int values
 * @n: length of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	for (n--; i < n; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
