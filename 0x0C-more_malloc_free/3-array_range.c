#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: where values are removed from
 * @max: the max values
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *str;
	int m;


	if (min > max)
	{
		return (NULL);
	}


	str = malloc(sizeof(*str) * ((max - min) + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (m = 0; (min + m) <= max; m++)
	{
		str[m] = (min + m);
	}

	return (str);
}
