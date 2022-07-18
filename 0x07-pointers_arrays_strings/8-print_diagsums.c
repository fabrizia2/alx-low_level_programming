#include "main.h"

/**
 * print_diagsums - sum of two diagonals of square matrix
 * @a: 2D array
 * @size: number of matrix
 * Return;
 */

void print_diagsums(int *a, int size)
{
	int k;
	int sum1 = 0;
	int sum2 = 0;

	for (k = 0; sum1 = sum1 + *(a + k * size + k); k++)
	{
		for (k = 0; sum2 = sum2 + *(a + k * size + size - k - 1); k++)
		{
			printf("%i, %i\n", sum1, sum2);
		}
	}
}
