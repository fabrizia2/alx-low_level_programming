#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: array`s element
 * @size: number of bytes
 *
 * Return: a pointer to allocated mem on success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int f;

	if (nmemb == 0 || size == 0 || str == NULL)
	{
		return (NULL);
	}

	str = malloc(nmemb * size);

	for (f = 0; nmemb > f; f++)
	{
		str[f] = 0;
	}

	return (str);
}
