#include "main.h"
/**
 * flip_bits -return number of bits to change from one number to another
 * @n: first number
 * @m: second number
 * Return: Number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum = 0;

	if (n >> 1)
		sum = flip_bits(n >> 1, m >> 1);
	return ((n & 1) ^ (m & 1) ? sum + 1 : sum);
}
