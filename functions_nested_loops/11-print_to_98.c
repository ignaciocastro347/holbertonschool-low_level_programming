#include <stdio.h>

/**
 * print_to_98 - Prints the numbers until 98
 *
 * @n: number to start counting
 *
 * Return: Always void
 */
void print_to_98(int n)
{
	printf("%d", n);
	while (n != 98) {
		printf(", ");
		n = n < 98 ? n + 1 : n - 1;
		printf("%d", n);
	}
	printf("\n");
}
