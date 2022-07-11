#include "main.h"

/**
 * puts2 - every other character of string
 * @str: argument
 * Return;
 */

void puts2(char *str)
{
	int k;

	k = 0;

	while (str[k] != '\0')
	{
		if (k % 2 == 0)
			_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
