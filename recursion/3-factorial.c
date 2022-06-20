#include "main.h"

/**
 * factorial - return the factorialof a given number
 * @n: number value
 * Return: int value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n -1));
	else
		return (1);
}
