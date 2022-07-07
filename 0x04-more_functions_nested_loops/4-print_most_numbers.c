#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 * Return;
 */

void print_most_numbers(void)
{

	int m = '0';

	while (m <= '9')
	{
		if (m != '2' && m != '4')
		{
			_putchar(m);
		}
		m++;
	}
	_putchar('\n');
}
