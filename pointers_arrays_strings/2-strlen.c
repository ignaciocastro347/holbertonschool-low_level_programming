#include "main.h"

/**
 * _strlen - get length of string
 * @s: a string value
 * Return: length of string as int
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s[i] != "\0")
		i++;
	return (i);
}
