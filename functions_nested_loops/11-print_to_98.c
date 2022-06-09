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
	int origin = n;

	do {
		if (n != origin)
			printf(", ");
		printf("%d", n);
		if (n == 98)
			break;
		n = n < 98 ? n + 1 : n - 1;
	} while (n != 98);
	printf("\n");
}
