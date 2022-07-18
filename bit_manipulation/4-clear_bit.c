#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to a numer value
 * @index: position to set a bit to 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int o = 1;

	if (index > 64)
		return (-1);
	if ((*n >> index) & 1)
	{
		o <<= index;
		*n = *n ^ o;
	}
	return (1);
}
