#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two string
 * @s1: string 1
 * @s2: string 2
 *Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr = NULL;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	ptr = (char *)malloc((i + j + 1)  * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i++] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
