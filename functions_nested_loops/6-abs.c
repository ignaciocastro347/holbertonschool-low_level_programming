#include "main.h"

/**
 * _abs - Returns the absolute value of a number
 *
 * @n: A number
 *
 * Return: Always an int value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return ((-1) * n);
	}
	return (n);
}
