#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	str = malloc(nmemb * size);
	if (str == NULL)
	{
		return (NULL);
	}

	for (f = 0; nmemb * size > f; f++)
	{
		str[f] = 0;
	}

	return (str);
}
