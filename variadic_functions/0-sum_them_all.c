#include <stdarg.h>

/**
 * sum_them_all - sum all the args passed to this function
 * @n: number of args
 * Return: the result of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	for (; i < n; i++)
		res += va_arg(ap, int);
	va_end(ap);
	return (res);
}
