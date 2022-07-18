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
	int k;
	int sum1 = 0;
	int sum2 = 0;

	for (k = 0; sum1 += a[k]; k++)
	{
		for (a += size; sum2 += a[size - k - 1]; k++)
		{
			printf("%d\n", sum2);
		}
		printf("%d, ", sum1);
	}
}
