#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: -1 value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid = (low + high) / 2;
	size_t i;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i < high)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		mid = (low + high) / 2;

		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;


	}
	return (-1);

}
