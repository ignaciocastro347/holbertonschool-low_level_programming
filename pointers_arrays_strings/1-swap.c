#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: firs int value
 * @b: second int value
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
