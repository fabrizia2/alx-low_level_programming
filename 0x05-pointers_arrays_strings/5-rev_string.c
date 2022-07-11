#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the output
 * Return;
 */

void rev_string(char *s)
{
	int start, middle, end;
	char string;

	start = 0;

	while (s[start] != '\0')
		start++;
	start--;

	for (middle = 0; middle <= start / 2; middle++)
	{
		string = s[middle];
		end = s[start - middle];
		s[middle] = end;
		s[start - middle] = string;
	}
}
