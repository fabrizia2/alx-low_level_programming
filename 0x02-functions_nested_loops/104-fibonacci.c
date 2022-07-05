#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
	int d, teacher, teacher2;
	long int r1, r2, fr, fr2, r11, r22;

	r1 = 1;
	r2 = 2;
	teacher = teacher2 = 1;
	printf("%ld, %ld", r1, r2);
	for (d = 0; d < 96; d++)
	{
		if (teacher)
		{
			fr = r1 + r2;
			printf(", %ld", fr);
			r1 = r2;
			r2 = fr;
		}
		else
		{
			if (teacher2)
			{
				r11 = r1 % 1000000000;
				r22 = r2 % 1000000000;
				r1 = r1 / 1000000000;
				r2 = r2 / 1000000000;
				teacher2 = 0;
			}
			fr2 = (r11 + r22);
			fr = r1 + r2 + (fr2 / 1000000000);
			printf(", %ld", fr);
			printf("%ld", fr2 % 1000000000);
			r1 = r2;
			r11 = r22;
			r2 = fr;
			r22 = (fr2 % 1000000000);
		}
		if (((r1 + r2) < 0) && teacher == 1)
			teacher = 0;
	}
	printf("\n");
	return (0);
}
