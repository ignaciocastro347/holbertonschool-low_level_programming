#include <stdout.h>

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
		printf(n);
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	} while (n != 98);

}
