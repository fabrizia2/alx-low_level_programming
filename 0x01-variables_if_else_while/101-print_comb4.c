#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: rints all possible different combinations of three digits
 *
 * Return: 0
 */

int main(void)
{
	int f, m, r;

	for (f = 0; f < 8; f++)
	{
		for (m = f + 1; m < 9; m++)
		{
			for (r = m + 1; r < 10; r++)
			{
				putchar('0' + f % 10);
				putchar('0' + m % 10);
				putchar('0' + r % 10);
				if (f == 7 && m == 8 && r == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
