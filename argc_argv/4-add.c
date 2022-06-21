#include <stdio.h>
#include <stdlib.h> /* atoi - converts string to int*/
#include <ctype.h>
/**
 * main - print the sum of each program argument
 * @argc: number of arguments
 * @argv: vector with arguments
 * Return: 0 in case everything is ok
 */
int main(int argc, char *argv[])
{
	int result, i, j;

	i = 1;
	result = j = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j])) /*if there are digits*/
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		result += atoi(argv[i]);
		i++;
	}
	printf("%d\n", result);
	return (0);
}
