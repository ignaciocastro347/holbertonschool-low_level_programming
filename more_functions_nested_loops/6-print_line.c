#include "main.h"

/**
 * print_line - Print lines n times
 *
 * @n: amount of times a line will be printed
 */
void print_line(int n)
{
	int i;

	if (n < 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
