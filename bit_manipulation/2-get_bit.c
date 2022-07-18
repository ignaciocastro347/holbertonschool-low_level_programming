#include "main.h"
/**
 * get_bit - get bit value of a number at index
 * @n: number
 * @index: position number
 * Return: value of bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	n = n >> index;
	return (n & 1 ? 1 : 0);
}
