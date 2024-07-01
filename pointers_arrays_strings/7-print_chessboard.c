#include "main.h"

/**
 * print_chessboard - check the code
 *
 * Description: print
 *
 * @a[8]: input memory area
 *
 * Return: Always 0.
 */

void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0 ; row < 8 ; row++)
	{
		for (column = 0 ; column < 8 ; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar('\n');
	}
}
