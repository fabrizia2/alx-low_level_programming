#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: where memory is copied to
 * @src: where memory is copied from
 * @n: max bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	/*introducing a for loop*/
	for (m = 0; n > 0; m++, n--)
	{
		src[m] = *dest;
	}
	return (dest);
}

