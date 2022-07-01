#include <stdio.h>

/**
 * main- Entry point
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
	for (b = a + 1; b < 10; b++)
	{
	putchar('0' + a % 10);
putchar('0' + b % 10);

if (a == 8 && b == 9)
	break;
putchar(',');
putchar(' ');

	}
	}

	putchar('\n');

	return (0);
}
