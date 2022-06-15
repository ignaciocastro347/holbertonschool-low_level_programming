#include "main.h"

/**
 * _puts - Print a string
 * @str: array of char values
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
