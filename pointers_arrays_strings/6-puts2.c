#include "main.h"
#include <string.h>

/**
 * puts2 - print string chars two by two
 * @str: string value
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
