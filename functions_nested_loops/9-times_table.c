#include "main.h"

/**
 * times_table - Prints the 9 time table
 *
 * Return: Always void
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((i * j) > 9)
				_putchar(((i * j) / 10) + '0');
			_putchar(((i * j) % 10) + '0');
			_putchar(',');
			_putchar(' ');
			if ((i * j) < 10)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
