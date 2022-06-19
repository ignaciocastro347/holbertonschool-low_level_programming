#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string value
 * @accept: string to be searched
 * Return: pointer to the byte in s that matches one byte in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	if (!s[0] || !accept[0])
		return ('\0');
	while (s[i])
	{
		if (s[i] == accept[0])
			return (&s[i]);
		i++;
	}
	return ('\0');
}
