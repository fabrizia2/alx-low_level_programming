#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: A pointer to a char that will be changed
 * @src: A pointer to a char that will be changed
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int l;

	l = 0;

	while (src[l] != '\0')
	{
		dest[l] = src[l];
		l++;
	}
	dest[l] = '\0';

	return (dest);
}
