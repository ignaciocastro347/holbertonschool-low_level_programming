#include "main.h"
#include <string.h>

/**
 * _strncpy - Copy a string
 * @dest: destination string
 * @src: original string
 * @n: amount of chars to be copied
 * Return: pointer to teh resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	src[i] = 0;
	return (dest);
}
