#include <stdio.h>

/**
 * main - prints multiples of 3 or 5 below 1024
 * Return: Always 0.
 */
int main(void)
{
	int f, m;

	for (f = 1; f < 1024; f++)
	{
		if ((f % 3) == 0 || (f % 5) == 0)
			m += f;
	}
	printf("%d\n", m);
	return (0);
}
