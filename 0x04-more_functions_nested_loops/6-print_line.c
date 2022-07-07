#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: The number of line to be printed
 * Return;
 */

void print_line(int n)
{

	int f;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (f = 1; f <= n; f++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
