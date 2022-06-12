#include "main.h"

/**
 * print_triangle - Print a triangle with #
 *
 * @size: amount of rows
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j  < size; j++)
		{
			if (j < (size - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
