#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: int
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int f, m, r;

	if (size > 0)
	{
		for (f = 1; f <= size; f++)
		{
			for (r = size - f; r > 0; r--)
				_putchar(' ');
			for (m = 0; m < f; m++)
				_putchar('#');
			if (f == size)
				break;
			_putchar('\n');
		}
	}

	_putchar('\n');

}
