#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: The number of diagonal
 * Return;
 */

void print_diagonal(int n)
{
	int diagonal = 0, line;

	if (n > 0)
	{

		while (diagonal < n)
		{
			for (line = 0; line < diagonal; line++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			diagonal++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
