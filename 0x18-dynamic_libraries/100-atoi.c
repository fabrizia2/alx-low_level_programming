#include "main.h"

/**
 * is_numerical - converts a string to an integer
 * @n: number
 * Return: if there`s a number, return 1 else return 0
 */

int is_numerical(unsigned int n)
{
	return (n >= '0' && n <= '9');
}

/**
 * _atoi - converts a string to an integer
 * @s: string
 * Return: num
 */

int _atoi(char *s)
{
	unsigned int number, r;
	int sign;

	sign = 1;
	number = 0;

	for (r = 0; s[r] != '\0'; r++)
	{
		if (is_numerical(s[r]))
		{
			number = (s[r] - 48) + number * 10;

			if (s[r + 1] == ' ')
				break;
		}
		else if (s[r] == '-')
		{
			sign *= -1;
		}

	}

	return (number * sign);
}

