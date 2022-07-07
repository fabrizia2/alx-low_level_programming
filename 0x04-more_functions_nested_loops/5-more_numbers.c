#include "main.h"

/**
 * more_numbers - prints 10 times the numbers between 0 and 14
 * Return;
 */

void more_numbers(void)
{
	int m, r;

	for (m = 0; m < 10; m++)
	{
		for (r = 0; r <= 14; r++)
		{
			if (r >= 10)
			{
				_putchar((r / 10) + '0');
			}
			_putchar((r % 10) + '0');
		}
		_putchar('\n');
	}
}
