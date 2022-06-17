#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string value
 * Return: encoded string value
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "43071"; 

	while (s[i])
	{
		j = 0;
		while (letters[j])
		{
			if (s[i] == letters[j])
				s[i] = numbers[j / 2];
			j++;
		}
		i++;
	}
	return (s);
}
