#include <stdio.h>

/**
 * main - prints the Fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
	int a;
	long int m1, m2, fm;

	m1 = 1;
	m2 = 2;
	printf("%ld, %ld", m1, m2);
	for (a = 0; a < 48; a++)
	{
		fm = m1 + m2;
		printf(", %ld", fm);
		m1 = m2;
		m2 = fm;
	}
	printf("\n");
	return (0);
}
