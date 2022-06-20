#include "main.h"

int get_square_root(int, int);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	return (get_square_root(0, n));
}

/**
 * get_square_root - look for square root
 * @i: iterator
 * @n: number
 * Return: the result
 */
int get_square_root(int i, int n)
{
	int result = i * i;

	if (result == n)
		return (i);
	else if (result > n)
		return (-1);
	else
		return (get_square_root(i + 1, n));
}	
