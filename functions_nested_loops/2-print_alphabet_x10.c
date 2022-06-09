#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return - Always void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	putchar('\n');
}

/**
 * print_alphabet_x10  - execute print_alphabet 10 times.
 *
 * Return: Always void.
 */
void print_alphabet_x10(void)
{
	char i;
	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
