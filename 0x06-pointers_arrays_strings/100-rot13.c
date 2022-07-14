#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @r: input string.
 * Return: the pointer to dest.
 */

char *rot13(char *r)
{
	int calc = 0, l;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(r + calc) != '\0')
	{

		for (l = 0; l < 52; l++)
		{
			if (*(r + calc) == letters[l])
			{
				*(r + calc) = rot13[l];
				break;
			}
		}
		calc++;
	}

	return (r);
}
