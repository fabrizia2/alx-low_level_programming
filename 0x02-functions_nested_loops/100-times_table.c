#include "main.h"

/**
 * print_times_table - prints the n times table starting from 0
 * @n: number times table (0 < n <= 15)
 * Return: no return
 */
void print_times_table(int n)
{
	int i, j, kl;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				kl = i * j;
				_putchar(44);
				_putchar(32);
				if (kl <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(kl + 48);
				}
				else if (kl <= 99)
				{
					_putchar(32);
					_putchar((kl / 10) + 48);
					_putchar((kl % 10) + 48);
				}
				else
				{
					_putchar(((kl / 100) % 10) + 48);
					_putchar(((kl / 10) % 10) + 48);
					_putchar((kl % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
