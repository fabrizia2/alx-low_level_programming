#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of two diagonals of square matrix
 * @a: 2D array
 * @size: number of matrix
 * Return;
 */

void print_diagsums(int *a, int size)
{
	int k = 0, m = 0;
	int sum1 = 0;
	int sum2 = size * size;

	for (; k < sum2; k += size)
	{
		for (sum1 += a[k + m]; sum2 += a[k + (size - 1) - m]; m++)
		{
			printf("%d\n", sum2);
		}
		printf("%d, ", sum1);
	}
}
