#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: return a pinter to enw allocated string
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int i = 0, j = 0;

	arr = malloc(strlen(s1) + strlen(s2) + 1);
	if (arr == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (; s1[i]; i++)
			arr[i] = s1[i];
	}
	if (s2 != NULL)
	{
		for (; s2[j]; j++)
			arr[i + j] = s2[j];
	}
	arr[i + j] = '\0';
	return (arr);
}
