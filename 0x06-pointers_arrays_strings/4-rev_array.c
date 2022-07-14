#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements
 * Return: returns void
 */

void reverse_array(int *a, int n)

{
	int *mel, *ren, f;
	int k;

	mel = a;
	ren = a;


	for (k = 0; k < n - 1; k++)
	{
		ren++;
	}




	for (k = 0; k < n / 2; k++)
	{


		f = *ren;
		*ren = *mel;
		*mel = f;

		mel++;
		ren--;
	}

}
