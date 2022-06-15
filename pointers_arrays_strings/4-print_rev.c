#include "main.h"
#include <string/h>

/**
 * print_rev - print a string in reverse
 * @s: string value
 */
void print_rev(char *s)
{
	int len = strlen(s);

	for (len--; len > 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
