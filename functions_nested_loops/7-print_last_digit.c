#include "main.h"

/**
 * print_last_digit - Return the last digit of a number
 *
 * @n: A number
 *
 * Return: Always an int value
 */
int print_last_digit(int n)
{
	if (n < 0)
	{	
		_putchar(((-n) % 10) + '0');
		return ((-n) % 10);
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}
