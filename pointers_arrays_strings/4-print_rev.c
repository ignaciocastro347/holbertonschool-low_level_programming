#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: string value
 */
void print_rev(char *s)
{
	int len = _strlen(str);

	for (len, len--; len > 0; len--)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
