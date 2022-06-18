#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: destiny string
 * @b: constant byte to fill
 * @n: times to fill s with b value
 * Return: pointer to updated string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (s[i] && i <= n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
