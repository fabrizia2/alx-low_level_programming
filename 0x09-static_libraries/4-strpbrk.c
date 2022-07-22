#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer where character is searched
 * @accept: chacter to be searched
 * Return:  pointer to byte in s that matches in accept, else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int m, r;

	/*for loop*/
	for (m = 0; s[m] != '\0'; m++)
	{
		/*inner for loop*/
		for (r = 0; accept[r] != '\0'; r++)
		{
			/*if statement*/
			if (s[m] == accept[r])
				return (s + m);
		}
	}
	return (0);
}
