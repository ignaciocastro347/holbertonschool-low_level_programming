#include "main.h"
#include <string.h>

/**
 * puts_half - print second half of string
 * @str: string value
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i;

	if (len % 2 != 0)
		len--;
	i = len / 2;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
