#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_strings - print strings from args with a separator
 * @separator: string to print between strings
 * @n: amount of variadic args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *temp;

	va_start(ap, n);
	for (; i < n; i++)
	{
		temp = va_arg(ap, char*);
		printf("%s", temp ? temp : "(nill)");
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
}
