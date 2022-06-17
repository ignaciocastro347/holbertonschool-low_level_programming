#include "main.h"
#include <string.h>

/**
 * _strcmp - Compare two strings
 * @s1: first string value
 * @s2: second string value
 * Return: 0 if strings are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	       i++;
	}
	return (0);
}
