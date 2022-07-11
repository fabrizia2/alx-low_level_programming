#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: A pointer to an int will be changed
 * Return: correct answer
 */

void print_rev(char *s)
{
	int b;

	b = 0;
	while (s[b] != '\0')
	{
		b++;
	}

	for (b = b - 1; b >= 0; b--)
	{
		_putchar (s[b]);
	}

	_putchar('\n');
}
