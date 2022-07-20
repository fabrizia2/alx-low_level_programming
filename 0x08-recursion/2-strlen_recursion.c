#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: the pointer to the string returned
 * Return: string length
 */

int _strlen_recursion(char *s)
{

	/*if statement*/
	if (*s == '\0')
		return (0);

	else
		return (1 + _strlen_recursion(++s));
}
