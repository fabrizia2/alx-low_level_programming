#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to a string
 * @c: character to locate
 * Return: pointer to the first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int k;

	/*introducing a for loop*/
	for (k = 0; s[k] >= '\0'; k++)
	{
		/*declearing if statement*/
		if (s[k] == c)
		{
			return (s + k);
		}
		else
			return ('\0');
	}
}
