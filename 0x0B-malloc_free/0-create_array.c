#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,initializing it to specific char
 * @size: number of char
 * @c: char
 * Return: NULL if size = 0, else return pointer
 */

char *create_array(unsigned int size, char c)
{
	char *k = malloc(size);
	unsigned int f;

	k = (char *) malloc(size * sizeof(c));

	if (k == 0 || size == 0)
	{
		return (NULL);
	}

	for (f = 0; size > f; f++)
	{
		*(k + f) = c;
	}

	return (k);
}
