#include "3-calc.h"

/**
 * op_add - sum two numbers
 * @a: first int value
 * @b: second int value
 * Return: the result of sum a with b values
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract two numbers
 * @a: first int value
 * @b: second int value
 * Return: the result of substract a with b values
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply two numbers
 * @a: first int value
 * @b: second int value
 * Return: the result of multiply a with b values
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: first int value
 * @b: second int value
 * Return: the result of divide a with b values
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - module two numbers
 * @a: first int value
 * @b: second int value
 * Return: the result of module a with b values
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
