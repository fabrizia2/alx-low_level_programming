#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: the string to traverse
 * @accept: source of string
 * Return: bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int m, k;

	/*Declaring a for loop*/
	for (m = 0; s[m] != '\0'; m++)
	{
		/*second for loop*/
		for (k = 0; accept[k] != s[m]; k++)
		{
			/*if statement*/
			if (accept[k] == '\0')
				return (m);
		}
	}
	return (m);
}
