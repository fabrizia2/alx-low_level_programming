#include "main.h"

/**
 * _puts - prints a string
 * @str: A pointer to an int that will be changed
 * Return;
 */

void _puts(char *str)
{
	char *f;
	int r;

	f = str;

	for (r = 0; f[r]; r++)
	{
		_putchar (f[r]);
	}
	_putchar('\n');
}
