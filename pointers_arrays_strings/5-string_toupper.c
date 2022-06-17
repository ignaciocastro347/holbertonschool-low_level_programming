#include "main.h"

/**
 * string_toupper - Change a string to uppercase chars
 * @s: string value
 * Return: pointer to uppercase string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
