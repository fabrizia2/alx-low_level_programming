#include "main.h"

/**
 * puts_half - half of a string
 * @str: input
 * Return;
 */

void puts_half(char *str)
{
	int m, final;

	m = 0;
	while (str[m] != '\0')
	{
		m++;
	}
	final = (m + 1) / 2;

	for (m = final; str[m]; m++)
	{
		_putchar (str[m]);
	}

	_putchar ('\n');
}
