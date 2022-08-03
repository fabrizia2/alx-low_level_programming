#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: element
 * @size: size of array
 * @action: pointer to the used function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t k = 0;

	if (array != NULL && action != NULL)
	{
		while (k < size)
		{
			action(array[k]);
			k++;
		}
	}
}
