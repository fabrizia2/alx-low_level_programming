#include <stdio.h>

/**
 * main - prints the largest prime factor of a number
 *
 * Return: 0
 */


int main(void)
{
	long j = 612852475143, k;

	while (k < (j / 2))
	{
		if ((j % 2) == 0)
		{
			j /= 2;
			continue;
		}

		for (k = 3; k < (j / 2); k += 2)
		{
			if ((j % k) == 0)
			j /= k;
		}
	}

	printf("%ld\n", j);

	return (0);
}
