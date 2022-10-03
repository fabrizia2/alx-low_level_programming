#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: A pointer to a character to be compared
 * @s2: A pointer to another compared character
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
