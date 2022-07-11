#include "main.h"
#include <stdio.h>

/**
 * print_array - n elements of an array of integers
 * @a: input
 * @n: return value n
 * Return;
 */

void print_array(int *a, int n)
{
	int f;

	f = 0;
	while (f < n)
	{
		printf("%d", a[f]);

		if (f < n - 1)
		{
			printf(", ");
		}
		f++;
	}
	printf("\n");
}
