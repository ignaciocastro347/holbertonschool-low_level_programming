#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string value
 * @needle: string to be searched
 * Return: pointer to the byte in s that matches one byte in accept.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	int firstOcc = 0;

	if (!haystack[0])
		return ('\0');
	if (!needle[0])
		return (haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			firstOcc = i;
			while (needle[j])
			{
				if (needle[j] == haystack[i])
					i++, j++; 
				else
					return ('\0');
			}
			return (&haystack[firstOcc]);
		}
		i++;
	}
	return ('\0');
}
