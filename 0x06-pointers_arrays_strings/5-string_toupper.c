#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: char
 */

char *string_toupper(char *str)
{
	int ren;

	for (ren = 0; str[ren] != '\0'; ren++)
	{
		if (str[ren] >= 'a' && str[ren] <= 'z')
		{
			str[ren] = str[ren] - 32;
		}
	}
	return (str);
}
