#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: prints all possible different combinations of three digits
 *
 * Return: 0
 */

int main(void)
{
	int m, r;

	for (m = 0; m < 99; m++)
	{
		for (r = m + 1; r <= 99; r++)
		{
			putchar('0' + m / 10);
			putchar('0' + m % 10);

			putchar(' ');

			putchar('0' + r / 10);
			putchar('0' + r % 10);

			if (m == 99 && r == 98)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
