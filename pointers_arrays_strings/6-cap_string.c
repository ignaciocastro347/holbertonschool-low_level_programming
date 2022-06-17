#include "main.h"
#include <string.h>

char capitalize(char);
int is_delimiter(char);

/**
 * cap_string - capitalizes all words of a string.
 * @s: string value
 * Return: new capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0)
		{
			s[i] = capitalize(s[i]);
		}
		else
		{
			if (is_delimiter(s[i - 1]) == 1)
			{
				s[i] = capitalize(s[i]);
			}
		}
		i++;
	}
	return (s);
}

/**
 * capitalize - capitalize a character
 * @c: char value
 * Return: cap char
 */
char capitalize(char c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	return (c);
}

/**
 * is_delimiter - check if char c is a delimiter
 * @c: char value
 * Return: 1 if is delimiter, 0 if not
 */
int is_delimiter(char c)
{
	char delimiters[] = " \t\n,;.!?\"(){}";
	int i = 0;

	while (delimiters[i])
	{
		if (c == delimiters[i])
			return (1);
		i++;
	}
	return (0);
}
