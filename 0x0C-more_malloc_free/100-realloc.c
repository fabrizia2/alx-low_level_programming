#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: void pointer
 * @old_size: already allocated size
 * @new_size: new size to allocate
 * Return: pointer to newly allocated memory or null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	unsigned char *str;
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
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	str = malloc(new_size * sizeof(char));
	if (str == NULL)
		return (NULL);
	k = 0;
	if (new_size > old_size)
	{
		while (k < old_size)
		{
			str[k] = ((char *)ptr)[k];
			k++;
		}
		free(ptr);
		return (str);
	}
	while (k < new_size)
	{
		str[k] = ((char *)ptr)[k];
		k++;
	}
	free(ptr);
	return (str);
}
