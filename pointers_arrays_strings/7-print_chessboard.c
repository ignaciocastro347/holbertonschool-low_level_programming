#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array
 */
void print_chessboard(char (*a)[8])
{
	int col = 0, row = 0;
	while (col < 8)
	{
		while (row < 8)
		{
			printf("%d", a[row][col]);
			row++;
		}
		col++;
	}
}
