#include "function_pointers.h"
/**
 * print_name - execute a callback function to print a name
 * @name: string value
 * @f: pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
