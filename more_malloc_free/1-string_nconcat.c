#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2 arg
 * Return: pointer to new array
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int length = 0, i, j;
	unsigned int s2len = 0;

	s2len = s2 != NULL ? strlen(s2) : 0;
	length = s1 == NULL ? 0 : strlen(s1);
	length += n >=  s2len ? s2len : n;
	arr = malloc((sizeof(char) * length) + 1);
	if (arr == NULL)
		return (NULL);
	if (s1 != NULL)
		for (i = 0; s1[i]; i++)
			arr[i] = s1[i];
	if (s2 != NULL)
		for (j = 0; j < n && s2[j]; j++)
			arr[i + j] = s2[j];
	arr[i + j] = '\0';
	return (arr);
}
