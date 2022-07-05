#include <stdio.h>

/**
 * main - prints the even values of fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
	long int r1, r2, fr, afr;

	r1 = 1;
	r2 = 2;
	fr = afr = 0;
	while (fr <= 4000000)
	{
		fr = r1 + r2;
		r1 = r2;
		r2 = fr;
		if ((r1 % 2) == 0)
		{
			afr += r1;
		}
	}
	printf("%ld\n", afr);
	return (0);
}
