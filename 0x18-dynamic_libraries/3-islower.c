#include "main.h"

/**
 * _islower - checks if a character islower
 * @c: contains value to be compared
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
