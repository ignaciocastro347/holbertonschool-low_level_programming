#include <stdio.h>

/**
 * print_triangle - Print a triangle with #
 *
 * @size: amount of rows
 */

void print_triangle(int size)
{
	int i;

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j  < 10; j++)
		{
			if (j < (10 - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
