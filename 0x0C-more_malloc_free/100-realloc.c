#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a mem block using mallock && free
 * @ptr: pointer to a mem previously allocated
 * @old_size: the size of allocated space for ptr
 * @new_size: new size of new mem
 *
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *str;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(sizeof(void *) * new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	str = malloc(sizeof(char) * new_size);
	if (str == NULL)
		return (NULL);
	for (k = 0; k < old_size || k < new_size; k++)
	{
		str[k] = ((char *)ptr)[k];
	}

		free(ptr);
		return (str);
}
