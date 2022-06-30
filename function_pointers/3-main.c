#include "3-calc.h"
/**
 * main - main function of the program
 * @argc: amount of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	op_func = get_op_func(argv[2][0]);
	printf("%d\n", op_func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
