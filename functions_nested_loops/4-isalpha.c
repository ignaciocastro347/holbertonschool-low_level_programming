#include "main.h"

/**
 * _isalpha - Print 1 if c is alphanumeric
 *
 * @c: A character
 *
 * Return: Always 1 or 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
