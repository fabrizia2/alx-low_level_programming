#include "main.h"

/**
 * _strlen -length of a string
 * @s: Returns the length of a string
 * Return: answer
 */

int _strlen(char *s)
{
	int r;

	r = 48;
	while (s[r] != '\0')
	{
		r++;
	}
	return (r);
}
