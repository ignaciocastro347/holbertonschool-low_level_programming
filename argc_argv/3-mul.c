#include <stdio.h>
#include <stdlib.h> /* atoi - converts string to int*/
/**
 * main - print every program argument
 * @argc: number of arguments
 * @argv: vector with arguments
 * Return: 0 in case everything is ok
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
