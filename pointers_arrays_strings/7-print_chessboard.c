#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;
	while (i < 8)
	{
		while (j < 8)
		{
			printf("%d", a[row][col]);
			row++;
		}
		col++;
	}
}