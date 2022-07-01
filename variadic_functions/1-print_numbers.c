#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers from args with a separator
 * @separator: string to print between numbers
 * @n: amount of variadic args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < (n - 1) && separator[0])
			printf("%s", separator);
	}
	printf("\n");
}
