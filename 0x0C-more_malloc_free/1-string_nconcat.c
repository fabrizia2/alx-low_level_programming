#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concates two strings
 * @s1: memory in new
 * @s2: string lenth
 * @n: number of bytes
 *
 * Return: NULL if fails, else pointer to new memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len = 0, m = 0, k;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
	{
		len++;
	}

	while (s2[m] != '\0')
	{
		m++;
	}

	if (n > m)
		n = m;
	str = malloc(sizeof(char) * (len + n + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < len; k += 1)
	{
		str[k] = s1[k];
	}

	for (; k < (len + n); k++)
	{
		str[k] = s2[k - len];
	}
		str[k] = '\0';

		return (str);
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
