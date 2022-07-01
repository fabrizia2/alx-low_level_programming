#include <stdio.h>

/**
 * main- Entry point
 *
 * Return: 0
 */
int main(void)
{
	int b;

	for (b = 48; b < 58; b++)
		putchar(b);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
