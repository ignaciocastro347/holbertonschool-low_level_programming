#include "main.h"
/**
 * binary_to_uint - convert binary value to unsigned int
 * @b: binary value
 * Return: unsigned int value
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n = 0;
	unsigned int exp = 1;

	if (!b)
		return (0);
	i = strlen(b) - 1;
	for (; b[i]; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			n += exp;
		exp *= 2;
	}
	return (n);
}

