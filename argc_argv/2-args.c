#include <stdio.h>
/**
 * main - print every program argument
 * @argc: number of arguments
 * @argv: vector with arguments
 * Return: 0 in case everything is ok
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i = 0;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
