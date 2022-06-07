#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		char c = n;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
