#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: A pointer to a character to be concatenated
 * @src: A pointer to another concatenated character
 * @n: value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int s = 0;
	int k = 0;

	while (dest[s] != '\0')
	{
		s++;
	}

	while (k < n && src[k] != '\0')
	{
		dest[s] = src[k];
		k++;
		s++;
	}
	dest[s] = '\0';

	return (dest);
}
