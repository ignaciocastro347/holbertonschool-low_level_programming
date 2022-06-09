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
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		_putchar((-last_digit) + '0');
		return ((-last_digit) % 10);
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
