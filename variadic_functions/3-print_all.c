#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_int(int);
void print_string(char *);
void print_char(char);
void print_float(float);
/**
 * print_all - print all formats from args with a separator
 * @format: string which each char represents a tyoe of data
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	int correctFormat;

	va_start(ap, format);
	while (format[i])
	{
		correctFormat = 1;
		switch (format[i])
		{
			case 'c':
				print_char(va_arg(ap, int));
				break;
			case 's':
				print_string(va_arg(ap, char *));
				break;
			case 'i':
				print_int(va_arg(ap, int));
				break;
			case 'f':
				print_float(va_arg(ap, double));
				break;
			default:
				correctFormat = 0;
				break;
		}
		if (correctFormat && format[i + 1])
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}

/**
 * print_int - print an int value
 * @n: int value
 */
void print_int(int n)
{
	printf("%i", n);
}
/**
 * print_string - print a string value
 * @s: string value
 */
void print_string(char *s)
{
	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_float - print a float value
 * @f: float value
 */
void print_float(float f)
{
	printf("%f", f);
}
/**
 * print_char - print a char value
 * @c: char value
 */
void print_char(char c)
{
	printf("%c", c);
}
