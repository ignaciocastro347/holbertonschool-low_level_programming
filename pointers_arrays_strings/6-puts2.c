#include "main.h"
#include <string.h>

/**
 * puts2 - print string chars two by two
 * @str: string value
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
