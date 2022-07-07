#include "main.h"

/**
 * print_square - prints square using #
 * @size: the size of the square
 * Return;
 */

void print_square(int size)
{
	int m, r;

	if (size > 0)
	{
		for (m = 0; m < size; m++)
		{
			for (r = 0; r < size; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
