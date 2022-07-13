#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: A pointer to a character to be copied
 * @src: A pointer to another copied character
 * @n: value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int r = 0;

	while (r < n && src[r] != '\0')
	{
		dest[r] = src[r];
		r++;
	}

	while (r < n)
	{
		dest[r] = '\0';
		r++;
	}
	return (dest);
}
