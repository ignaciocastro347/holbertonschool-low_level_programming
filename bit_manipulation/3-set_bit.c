#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to a numer value
 * @index: position to set a bit to 1
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int o = 1;

	if (index > 64)
		return (-1);
	o <<= index;
	*n = *n | o;
	return (1);
}
