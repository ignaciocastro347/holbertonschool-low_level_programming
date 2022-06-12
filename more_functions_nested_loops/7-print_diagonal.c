#include "main.h"

/**
 * print_diagonal - Print a doagonal n times
 *
 * @n: amount of times a diagonal will be printed
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\');
			_putchar('\n');
	}
	else
		_putchar('\n');
}
