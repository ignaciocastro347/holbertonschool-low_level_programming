#include "3-calc.h"
/**
 * get_op_func - select the func to perform the operation asked
 * @s: operator as char
 * Return: pointer to a function
 */
int (*get_op_func(char s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{'+', op_add},
		{'-', op_sub},
		{'*', op_mul},
		{'/', op_div},
		{'%', op_mod},
		{'\0', NULL}
	};

	while (i < 5)
	{
		if (ops[i].op == s)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
