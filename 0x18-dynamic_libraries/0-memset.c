#include "main.h"

/**
 * _memset - It fills memory with a constant byte
 * @s: pointer to place the constant
 * @b: the constant to be placed
 * @n: max bytes to be used
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	/*Declearing for loop*/
	for (k = 0; n > 0; k++, n--)
	{
		s[k] = b;
	}
	return (s);
}
