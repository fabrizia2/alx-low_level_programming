#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: A pointer to a character that will be concatenated
 * @src: A pointer to another concatenated character
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int s = 0;
	int k = 0;

	while (dest[s] != '\0')
	{
		s++;
	}

	while (src[k] != '\0')
	{
		dest[s] = src[k];
		k++;
		s++;
	}
	dest[s] = '\0';

	return (dest);
}
