#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * @str: string to be duplicated
 * Return: NULL if str = NULL, else pointer to duplicate
 */

char *_strdup(char *str)
{
	int m = 0;
	int dest;
	char *pstr;

	pstr = malloc(dest * sizeof(*str) + 1);
	if (str == NULL || pstr == 0)
	{
		return (NULL);
	}

	for (dest = 0; str[dest]; dest++)
	{
		pstr = malloc(dest * sizeof(*str) + 1);
	}

	for (; m <= dest; m++)
	{
		pstr[m] = str[m];
	}
	return (pstr);
}
