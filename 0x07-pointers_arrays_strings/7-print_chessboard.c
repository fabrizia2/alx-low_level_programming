#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: 2D array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int m, r;

	for (m = 0; m < 8; m++)
	{
		for (r = 0; r < 8; r++)
		{
			_putchar(a[m][r]);
		}
		_putchar('\n');
	}
}
