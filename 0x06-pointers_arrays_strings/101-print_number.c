#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int k, r, calc;

	if (n < 0)
	{
		_putchar(45);
		k = n * -1;
	}
	else
	{
		k = n;
	}

	r = k;
	calc = 1;

	while (r > 9)
	{
		r /= 10;
		calc *= 10;
	}

	for (; calc >= 1; calc /= 10)
	{
		_putchar(((k / calc) % 10) + 48);
	}
}
