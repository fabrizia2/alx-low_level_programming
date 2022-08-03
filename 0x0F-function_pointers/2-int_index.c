#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: num of elements in array
 * @cmp: pointer to the function used for comparison
 *
 * Return: the index to first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k = 0;

	if (size <= 0 || !array || !cmp)
	{
		return (-1);
	}

	while (k < size)
	{
		if (cmp(array[k]) != 0)
			return (k);
		k++;
	}

	return (-1);
}
