#include "main.h"

int get_prime_number(int, int);
/**
 * is_prime_number - returns the prime number of a number.
 * @n: number
 * Return: the result
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (get_prime_number(n - 1, n));
}

/**
 * get_prime_number - look for prime number
 * @i: iterator
 * @n: number
 * Return: the result
 */
int get_prime_number(int i, int n)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (get_prime_number(i - 1, n));
}
