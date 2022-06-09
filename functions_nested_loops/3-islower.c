#include "main.h"

/**
 * _islower - Print 1 if c is lowercase
 *
 * @c: A character
 *
 * Return: Always 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
