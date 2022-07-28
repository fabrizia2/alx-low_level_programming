#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to be allocated
 *
 * Return: 98 if fails else pointer to allocated mem
 */

void *malloc_checked(unsigned int b)
{

	void *str;

	str = malloc(b);
	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
