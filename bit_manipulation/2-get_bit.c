#include "main.h"
/**
 * get_bit - get bit value of a number at index
 * @n: number
 * @index: position number
 * Return: value of bit or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	n = n >> index;
	return (n & 1 ? 1 : 0);
}
