#include "main.h"

/**
 * _strcpy - copy the src string to dest
 * @src: original string
 * @dest copied string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		*(dest + i) = src[i];
		i++;
	}
	return dest;
}
