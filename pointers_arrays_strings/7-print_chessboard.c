#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array
 */
void print_chessboard(char (*a)[8])
{
	int col = 0, row = 0;
	while (col < 8)
	{
		row = 0;
		while (row < 8)
		{
			_putchar(a[col][row]);
			row++;
		}
		_putchar('\n');
		col++;
	}
}
