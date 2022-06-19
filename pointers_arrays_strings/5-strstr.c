#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string value
 * @needle: string to be searched
 * Return: pointer to the byte in s that matches one byte in accept.
 */
char *_strpbrk(char *haystack, char *needle)
{
	int i = 0, j = 0;
	int firstOcc = 0;
	int charsFound = 0;
	int wordFound = 0

	if (!haystack[0])
		return ('\0');
	if (!needle[0])
		return (haystack);
	while (hystack[i])
	{
		if (hystack[i] == needle[j])
		{
			firstOcc = i;
			while (needle[j])
			{
				if (needle[j] == haystack[i])
					i++, j++; 
				else
					return ('\0');
			}
			return (&hystack[firstOcc]);
		}
		i++;
	}
	return ('\0');
}
